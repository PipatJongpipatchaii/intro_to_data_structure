#include <iostream>
#include <map>
using namespace std;

int main()
{
    int amt;
    int check = 1;
    bool oneone = true;
    bool onto = true;
    map<int,int> func;
    cin >> amt;
    for (int i = 0; i < amt; i++){
        int y;
        cin >> y;
        if (func.find(y)!= func.end()){
            oneone = false;
            break;
        }else func[y] = i;
    }

    for (auto it = func.begin();it != func.end(); it++){
        if (it->first != check){
            onto = false;
            break;
        }
        check++;
    }
    if (oneone&&onto){
        cout << "YES";
    }else cout << "NO";
}
