#include <iostream>
#include <vector>
using namespace std;

bool insertChild(vector<int> &v,int p,int n){
    if(p*2+1 >= n) return true;
    v.push_back(p*2+1);
    //cout << p*2+1 << " ";
    if(p*2+2 >= n) return true;
    v.push_back(p*2+2);
    //cout << p*2+2 << " ";
    return false;
}

int main()
{
    int n,m;
    vector<int> vec;
    cin >> n >> m;
    vec.push_back(m);
    int i = 0;
    while(true){
        if(insertChild(vec,vec[i],n)) break;
        i++;
    }

    cout << vec.size()<<"\n";
    for (int n:vec){
        cout << n << " ";
    }
}
