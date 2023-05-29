#include <iostream>
#include <set>
using namespace std;

int main()
{
    int info, question;
    set<pair<int,int>> published;
    cin >> info >> question;
    for (int i = 0; i < info; i++){
        int year,month;
        cin >> year >> month;
        pair<int,int> p = {year,month};
        published.insert(p);
    }
    for (int i = 0; i < question; i++){
        int year, month;
        cin >> year >> month;
        pair<int,int> p = {year,month};
        auto rpublished = published.lower_bound(p);
        if (*rpublished == p){
            cout << "0 " << "0 ";
        }else if (p > *(--published.end())){
            cout << (--published.end())->first << " " << (--published.end())->second <<" ";
        }else if (p < *published.begin()){
            cout << -1 << " " << -1 <<" ";
        }else {
            rpublished--;
            cout << (rpublished)->first << " " << (rpublished)->second << " ";
        }
    }
}
