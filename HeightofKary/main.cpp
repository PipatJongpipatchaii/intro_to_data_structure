#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int n,k,i;
    cin >> n >> k;
    i = logb(n)/logb(k);
    if (k==1) i = n-1;
    else if (pow(k,i) < n) i++;
    cout << i;
}
