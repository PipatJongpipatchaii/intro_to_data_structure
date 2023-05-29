#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
void list_erase(vector<int> &v, vector<int> &pos) {
 //write your code here
    vector<int> newVec;
    sort(pos.begin(),pos.end());
    for (int i = 0; i < pos.size(); i++){
        if ((i==0)&&(pos[i]>0)){
            newVec.insert(newVec.end(),v.begin(),v.begin()+pos[i]);
        }else if (pos[i]-pos[i-1]>1){
            newVec.insert(newVec.end(),v.begin()+pos[i-1]+1,v.begin()+pos[i]);
        }
        if ((i==pos.size()-1)&&(pos[i]!=v.size()-1)){
            newVec.insert(newVec.end(),v.begin()+pos[i]+1,v.end());
        }
    }
    v = newVec;
}
int main() {
 std::ios_base::sync_with_stdio(false);
 cin.tie(0);
 int n,m;
 cin >> n >> m;
 vector<int> v(n), pos(m);
 for (int i = 0;i < n;i++) cin >> v[i];
 for (int i = 0;i < m;i++) cin >> pos[i];
 list_erase(v,pos);
 cout << "After call list_erase" << endl << "Size = " << v.size() << endl;
 for (auto &x : v) cout << x << " ";
 cout << endl;
}
