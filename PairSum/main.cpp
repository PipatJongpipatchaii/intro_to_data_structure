#include <iostream>
#include <algorithm>    // std::find
using namespace std;

bool sumInArray[2000000];
int main()
{
    int arraySize, sumToFind;
    bool found = false;
    cin >> arraySize >> sumToFind;
    int numArray[arraySize];

    bool *ps = sumInArray;
    int *p = numArray;
    for (int i = 0; i<arraySize; i++){
        int num;
        cin >> num;
        numArray[i] = num;
    }
    for (int i = 0 ; i< arraySize; i++){
        for (int j = 0 ; j< arraySize; j++){
            if ((i!=j)){
                sumInArray[numArray[i]+numArray[j]] = true;
            }

        }
    cout << sumInArray[10] <<endl;
    }
    for (int i = 0; i< sumToFind; i++){
        int sum;
        cin >> sum;
        if (sumInArray[sum]) {
            cout << "YES"<<endl;
            found = true;
        }else cout << "NO"<<endl;

    }

}
