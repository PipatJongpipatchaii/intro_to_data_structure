#include <bits/stdc++.h>
using namespace std;


void reverse_Vector(vector<int> &v){
    vector<int> newVector;
    for (auto elmt : v){
        newVector.insert(newVector.begin(),elmt);
    }
    v = newVector;
}

int main()
{
    int ordersNumber;
    vector<int> vect;
    cin >> ordersNumber;
    for (int i = 0 ; i < ordersNumber ; i++){
        string order;
        cin >> order;
        if (order == "pb"){
            int number;
            cin >> number;
            vect.push_back(number);
        }
        else if (order == "d"){
            int pos;
            cin >> pos;
            vect.erase(vect.begin()+pos);
        }
        else if (order == "sa"){
            sort(vect.begin(),vect.end());
        }
        else if (order == "sd"){
            sort(vect.begin(),vect.end());
            reverse_Vector(vect);
        }
        else if (order == "r"){
            reverse_Vector(vect);
        }
    }
    for (int number : vect){
        cout << number << " ";
    }
    return 0;
}



