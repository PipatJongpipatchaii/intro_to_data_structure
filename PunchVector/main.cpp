#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator
it,int k) {
    vector<string>::iterator leftIt,rightIt;
    if (v.end()-it <=k){
        rightIt = v.end();
    }else rightIt = it +k+1;

    if (it - v.begin()<k){
        leftIt = v.begin();
    }else leftIt = it -k;
    v.erase(leftIt,rightIt);
    return v;
 //write some code here
 //don’t forget to return something
}
int main() {
 int n,j,k;
 cin >> n >> j >> k;
 vector<string> v(n);
 for (int i = 0;i < n;i++) {
 cin >> v[i];
 }
 cout << "Result after punch" << endl;
 vector<string> result = punch(v, v.begin() + j, k);
 for (auto &x : result) {
 cout << x << endl;
 }
}
