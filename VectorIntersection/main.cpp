#include <iostream>
#include <set>
using namespace std;

int main()
{
    int amt1;
    int amt2;
    set<int> set1;
    set<int> result;
    cin >> amt1 >> amt2;
    for (int i = 0; i< amt1; i++){
        int value;
        cin >> value;
        set1.insert(value);
    }
    for (int i = 0;i < amt2; i++){
        int value;
        cin >> value;
        if (set1.find(value)!= set1.end())
            result.insert(value);
    }
    for (int value:result){
        cout << value << " ";
    }
}
