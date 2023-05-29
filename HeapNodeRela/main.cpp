#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    while (y--){
        int a,b;
        bool yes = false;
        bool valid = true;
        cin >> a >> b;
        if (a>=x || b >=x) valid = false;

        if (valid && a > b){
            while(a>=b){
                if (a==b){
                    yes = true;
                    cout << "b is an ancestor of a"<<"\n";
                    break;
                }
                a = (a-1)/2;
                //cout << a << "\n";
            }
            if (!yes) cout << "a and b are not related"<<"\n";

        }else if (valid && b > a){
            while(a<=b){
                if (a==b){
                    yes = true;
                    cout << "a is an ancestor of b"<<"\n";
                    break;
                }
                b = (b-1)/2;
                //cout << b << "\n";
            }
            if (!yes) cout << "a and b are not related"<<"\n";
        }else cout << "a and b are the same node"<<"\n";
    }
}
