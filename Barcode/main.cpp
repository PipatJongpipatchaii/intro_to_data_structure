#include <iostream>
#include <vector>
using namespace std;

void genBarcode(int bars, int now, vector<int> &v,int w,int nb,int nw){
    if(now<bars){
        if (nb<bars-w){
            v[now] = 0;
            genBarcode(bars,now+1,v,w,nb+1,nw);
        }
        if (nw<w){
            v[now] = 1;
            genBarcode(bars,now+1,v,w,nb,nw+1);
        }

    }else{
        for(auto &x : v)cout << x;
        cout << "\n";
    }
}

int main()
{
    int white,bars;
    cin >> white >> bars;
    vector<int> v(bars);
    genBarcode(bars,0,v,white,0,0);
}
