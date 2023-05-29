#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int ar[100000];
map<int,int> mp;
int main()
{

    string st= "t";
    char ch = st.at(0);
    if (ch+18>122){
        ch += 18 -26;
    }
    cout << tolower(ch);
    //ch+=6;
    /*
    if (!("a"<=ch<="z")) {
        ch-=26;
    }*/
    cout <<ch;

}
