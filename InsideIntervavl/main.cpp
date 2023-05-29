#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    bool inrange = false;
    int amt;
    int qamt;
    vector<int> vec;
    cin >> amt >>qamt;
    for (int i = 0; i < amt; i++){
        int left,right;
        cin >> left>>right;
        vec.push_back(left);
        vec.push_back(right);
    }
    sort(vec.begin(),vec.end());
    for (int i:vec){
        cout << i << " ";
    }
    for (int i = 0; i < qamt; i++){
        int q;
        cin >>q;
        auto const it = lower_bound(vec.begin(), vec.end(), q);
        if (((it-vec.begin())%2 != 0)&&(it!=vec.end())){
                inrange = true;
        }else if (*it == q){
            inrange = true;
        }
        cout<< inrange <<" ";
        inrange = false;
    }

}
