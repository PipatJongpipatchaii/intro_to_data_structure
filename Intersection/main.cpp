#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int size1;
    int size2;
    cin >> size1 >> size2;
    vector<int> vector1;
    vector<int> intersectV;
    for (int i = 0; i < size1; i++){
        int member;
        cin >> member;
        if (find(vector1.begin(),vector1.end(),member)==vector1.end())
            vector1.push_back(member);
    }

    for (int i = 0; i < size2; i++){
        int member;
        cin >> member;
        if ((find(intersectV.begin(),intersectV.end(),member)==intersectV.end())&&(find(vector1.begin(),vector1.end(),member)!=vector1.end()))
            intersectV.push_back(member);
    }

    sort(intersectV.begin(),intersectV.end());
    for (int member : intersectV){
        cout << member << " ";
    }


}
