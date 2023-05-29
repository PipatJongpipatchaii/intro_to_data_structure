#include <iostream>

using namespace std;

int main()
{
    int mSize;
    int n = 1;
    cin >> mSize;
    while (n<mSize){
        n *= 2;
    }
    cout << n-mSize;
}
