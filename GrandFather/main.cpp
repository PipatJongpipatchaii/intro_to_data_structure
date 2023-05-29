#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int fatherSon, pairToCheck;
    map<long long int,long long int> famPairs;
    cin >> fatherSon >> pairToCheck;
    for (int i = 0; i < fatherSon; i++){
        long long int fatherId,sonId;
        cin >> fatherId >> sonId;
        famPairs[sonId] = fatherId;
    }
    for (int i = 0; i < pairToCheck; i++){
        long long int rela1,rela2;
        cin >> rela1 >> rela2;
        if ((famPairs[famPairs[rela1]]!=0)&&(rela1!=rela2)&&(famPairs[famPairs[rela1]] == famPairs[famPairs[rela2]])){
            cout<<famPairs[famPairs[rela1]]<<" "<<famPairs[famPairs[rela2]]<<endl;
            cout << "YES"<<endl;
        }else cout << "NO"<<endl;
    }
}
