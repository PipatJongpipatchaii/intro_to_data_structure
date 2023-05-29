#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,start,money;
    bool robbed = false;
    vector<int> total_money;
    cin >> n >> m >> start;
    int total = 0;
    int saving = start;
    int total_date = 0;
    for(int i = 0; i < n; i++){
        int a,s;
        cin >> a >> s;

        while(total_money.size()!=a){
            total += saving;
            total_money.push_back(total);
        }
        saving = s;
    }/*
    for(int n:total_money){
        cout << n << " ";
    }
    cout << "\n";*/
    for(int i = 0;i < m;i++){
        int P,x;
        cin >> P >> x;
        auto date = lower_bound(total_money.begin(),total_money.end(),P);
        if (date-total_money.begin() > x){
            P = P+total_money[x];
            date = lower_bound(total_money.begin(),total_money.end(),P);
            robbed = true;
        }
        total_date = date-total_money.begin();
        if (date == total_money.end()){
            total = *(total_money.end()-1);
            total_date = total_money.size()-1;
            //cout << "add" << " ";
            total_date = (P-total)/saving+total_date;
            if ((P-total)%saving!=0) total_date++;

            /*while (total<P){
                total += saving;
                total_date++;
                //cout << total << " ";
            }*/
            //cout << "end" << " ";
        }
        cout << total_date << " ";
    }
}
