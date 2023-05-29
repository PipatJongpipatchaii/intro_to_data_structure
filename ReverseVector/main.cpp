#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,int a,int b) {
 //write your code only in this function
    int counter = b-a;
    for (int i = a ;i < int ((a+b)/2) +1; i++){
        vector<int>::iterator leftIt = v.begin() + i;
        vector<int>::iterator rightIt = leftIt + counter;
        auto leftEm = *leftIt;
        auto rightEm = *rightIt;
        *leftIt = rightEm;
        *rightIt = leftEm;
        counter-=2;
    }
}
int main() {
 //read input
 int n,a,b;
 cin >> n;
 vector<int> v;
 for (int i = 0;i < n;i++) {
 int c;
 cin >> c;
 v.push_back(c);
 }
 cin >> a >> b;
 //call function
 reverse(v,a,b);
 //display content of the vector
 for (auto &x : v)
 cout << x << " ";
 cout << endl;
}
