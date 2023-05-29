#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l;

    for (int i = 0; i < 20; i++){
        //cout << i << " ";
        l.push_back(i);
    }
    auto it = l.begin();
    cout << *(++it) << "\n";
    l.insert(l.begin(),20);

    //cout << *(it++) << "\n";
    //cout << *it << "\n";
    //it--;
    l.erase()
    for (auto it = l.begin(); it != l.end();it++){
        cout << *it << " ";
    }


}

