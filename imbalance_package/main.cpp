#include <iostream>
#include "map_bst.h"
using namespace std;

int main()
{
    CP::map_bst<int, int> m;
    int n;
    cin >> n;
    for (int i = 0; i<n;i++){
        int j;
        cin >> j;
        m[j] = 0;
    }
    m.print();
    std::cout<<m.getValueOfMostImbalanceNode()<<endl;
    return 0;
}
