#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

class Bid{

public :
    int Bidder;
    int value;


    Bid(int& b){
        Bidder = b;
        value = 0;
    }

    Bid(int& b, int& v){
        Bidder = b;
        value = v;
    }

    void reset(){
        this->value = 0;
    }
    bool operator < (const Bid& other)const{
        if (this->value == other.value){
            return this->Bidder < other.Bidder;
        } return this->value < other.value;
    }

    bool operator == (const Bid& other) {
        if (this->Bidder ==other.Bidder){
            return true;
        }return false;
    }


};

int main()
{
    int N,M,A;
    cin >> N >> M >> A;
    vector<Bid> allBids[N];
    vector<int> winners[M];
    vector<int> itemAmt;
    for (int i = 0; i < N; i++){
        int amt;
        cin >> amt;
        itemAmt.push_back(amt);
    }
    for (int i = 0; i < A; i++){
        string cmd;
        cin >> cmd;
        if (cmd == "B"){
            int U,I,V;
            cin >> U >> I >> V;
            Bid bid(U,V);
            if (I<=N){
                auto it = find(allBids[I-1].begin(),allBids[I-1].end(),bid);
                if (it!=allBids[I-1].end()){
                    *it = bid;
                }else allBids[I-1].push_back(bid);
            }
        }else if (cmd == "W"){
            int U,I;
            cin >> U>> I;
            Bid b(U);
            if (I <= N){
                auto it = find(allBids[I-1].begin(),allBids[I-1].end(),b);
                if (it != allBids[I-1].end()){
                    (*it).reset();
                }

            }

        }

    }
    for (int i = 0; i < N; i++){
        //cout <<"---" << i+1 << "---"<<"\n";
        if (allBids[i].size()>0){
          sort(allBids[i].rbegin(),allBids[i].rend());
          /*for (Bid b:allBids[i]){
               cout << b.Bidder <<" " << b.value << "\n";
          }*/

          for (int j = 0; j < itemAmt[i]; j++){
            if (j >= allBids[i].size()) break;
            if (allBids[i][j].value >0){
                winners[allBids[i][j].Bidder-1].push_back(i+1);
            }
          }
        }

    }

    for (vector<int> bidder:winners){
        if (bidder.size()>0){
            for (int item:bidder){
                cout << item << " ";
            }
        }else cout << "NONE";
        cout << "\n";
    }
}
