#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N, M;
    priority_queue<pair<int,int>> q;
    cin >> N >> M;
    int wait = M;
    for (int i = 0; i < N; i++){
        int time;
        cin >> time;
        pair<int,int> chef {0,-time};
        q.push(chef);
    }
    while (wait!=0){
        cout << -q.top().first << "\n";
        pair<int,int> finish = {(q.top().first+q.top().second),q.top().second};
        q.pop();
        q.push(finish);
        wait--;
    }
    return 0;
}
