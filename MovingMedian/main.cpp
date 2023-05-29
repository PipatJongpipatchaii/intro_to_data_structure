#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;
int findNewMedian(priority_queue<int> &q, int &prevnum, int num, int pos){
    stack<int> tempS;
    bool hasPrevNum = true;
    bool notFound = true;
    int frontNum = 1000001;
    int median;
    int counter = 0;
    q.push(num);
    while ((hasPrevNum)||notFound){
        //cout << "Searching..." << "\n";
        if (!hasPrevNum || (q.top() != prevnum)){
            if (q.top()!=frontNum){
                frontNum = q.top();
                tempS.push(q.top());
            }
            q.pop();
            counter += 1;
        }else if (hasPrevNum) {
            q.pop();
            hasPrevNum = false;
        }
        if (counter == pos){
            median = tempS.top();
            notFound = false;
        }
    }
    while (tempS.size()>0){
        //cout << "returning..." << "\n";
        q.push(tempS.top());
        tempS.pop();
    }
    return median;

}
int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n, w, num,pos;
    cin >> n >> w;
    pos = 1+w/2;
    priority_queue<int> sortedQ;
    queue<int> prevQ;
    sortedQ.push(1000001);
    prevQ.push(1000001);
    for (int i = 0; i < n; i++){
        cin >> num;
        prevQ.push(num);
        if (i>w-1){
            cout << findNewMedian(sortedQ,prevQ.front(),num,pos)<< " ";
            prevQ.pop();
        }else {
            sortedQ.push(num);
        }
    }

}
