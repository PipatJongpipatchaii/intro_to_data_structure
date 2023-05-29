#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    bool inrange = false;
    int amt, qamt, range;
    vector<int> vec;
    cin >> amt >>qamt >> range;
    for (int i = 0; i < amt; i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    for (int i = 0; i < qamt; i++){
        int q;
        cin >> q;
        auto const left = lower_bound(vec.begin(), vec.end(), q-range);
        auto const right = upper_bound(vec.begin(),vec.end(), q+range);
        if (right - left >= 0){
            cout << right-left << " ";
        }else cout << 0 << " ";
    }

}
