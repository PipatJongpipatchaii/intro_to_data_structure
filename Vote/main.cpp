#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int voteCount, slots;
    map<string,int> scoresName;
    vector<int> scores;
    auto lastVoteIt = scores.begin();
    cin >> voteCount >> slots;
    for (int i = 0; i < voteCount; i++){
        string name;
        cin >> name;
        if (scoresName.find(name)==scoresName.end()){
            scoresName[name] = 0;
        }
        scoresName[name] += 1;
    }
    for (map<string,int>::iterator it = scoresName.begin(); it != scoresName.end(); it++){
        scores.push_back(it->second);
    }
    sort(scores.begin(),scores.end());
    if (scores.size()<slots){
        lastVoteIt = scores.begin();
    }else lastVoteIt = scores.end()-slots;
    cout << *(lastVoteIt);
}
