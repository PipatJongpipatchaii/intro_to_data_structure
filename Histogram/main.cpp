#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int nameNum;
    map<string,int> dupName;
    cin >> nameNum;
    for (int i = 0; i < nameNum; i++){
        string name;
        cin >> name;
        if (dupName.find(name)==dupName.end()){
            dupName[name] = 0;
        }
        dupName[name] += 1;
    }
    for (auto it = dupName.begin(); it != dupName.end();it++){
        if (it->second > 1){
            cout << it->first << " " << it->second << "\n";
        }
    }
}
