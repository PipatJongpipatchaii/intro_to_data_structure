#include <iostream>
#include <vector>
using namespace std;

void genConOnes(int cap,int now,int ones,vector<int> &v,int stack){
    if (now < cap){
        if (cap-now>ones||stack>=ones){
            int s = 0;
            if (stack>=ones) s = stack;
            v[now] = 0;
            genConOnes(cap,now+1,ones,v,s);
        }
        v[now] = 1;
        genConOnes(cap,now+1,ones,v,stack+1);
    }else if (now >= cap && stack>=ones){
        for (auto &x:v)cout<<x;
        cout<<"\n";
    }
}

int main()
{
    int cap,ones;
    cin >> cap >> ones;
    vector<int> v(cap);
    bool c = false;
    genConOnes(cap,0,ones,v,0);
}
