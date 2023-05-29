#include <iostream>
#include <list>
using namespace std;

void depleteBalls(list<int> &lList, list<int> &rList,int V){
    bool ldeplete = true;
    bool rdeplete = true;
    while(ldeplete || rdeplete){
        if (!lList.empty()&&lList.back()==V)lList.pop_back();
        else ldeplete = false;
        if (!rList.empty()&&rList.front()==V)rList.pop_front();
        else rdeplete = false;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N,K,V;
    cin >> N >> K >> V;
    list<int> lBalls,rBalls;
    for(int i = 0; i <K; i++){
        int b;
        cin >> b;
        lBalls.push_back(b);
    }
    for (int i = K;i<N ; i++){
        int b;
        cin >> b;
        rBalls.push_back(b);
    }
    if (lBalls.back()==V){
        if ((rBalls.front()==V)) depleteBalls(lBalls,rBalls,V);
        else {
            lBalls.pop_back();
            if ((lBalls.back())==V) depleteBalls(lBalls,rBalls,V);
            else lBalls.push_back(V);
        }
    }else if ((rBalls.front())==V){
        rBalls.pop_front();
        if ((rBalls.front())==V) depleteBalls(lBalls,rBalls,V);
        else rBalls.push_front(V);
    }else lBalls.push_back(V);

    if ((lBalls.back())==V && (rBalls.front())==V){
        lBalls.pop_back();
        rBalls.pop_front();
        if ((lBalls.back())==V || (rBalls.front())==V){
            lBalls.push_back(V);
            rBalls.push_front(V);
            depleteBalls(lBalls,rBalls,V);
        }else{
            lBalls.push_back(V);
            rBalls.push_front(V);
        }
    }

    for (int &b:lBalls) cout << b << " ";
    for (int &b:rBalls) cout << b << " ";

}

