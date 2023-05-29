#include <iostream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    cout << std::fixed << std::setprecision(2);
    int ratingCount;
    cin >> ratingCount;
    unordered_map<string,pair<int,int>> allRating;
    vector<string> rh;
    for (int i = 0; i < ratingCount; i++){
        int score;
        string subj,prof;
        cin >> subj >> prof >> score;
        if (allRating.find(subj)==allRating.end()){
            rh.push_back(subj);
            allRating[subj].first = 0;
            allRating[subj].second = 0;
        }
        if (allRating.find(prof)==allRating.end()){
            rh.push_back(prof);
            allRating[prof].first = 0;
            allRating[prof].second = 0;
        }
        allRating[subj].first += score;
        allRating[subj].second += 1;
        allRating[prof].first += score;
        allRating[prof].second += 1;
    }
    sort(rh.begin(),rh.end());
    for (auto it = rh.begin(); it != rh.end(); it++){
        cout << *it << " " << (allRating[*it].first + 0.0)/allRating[*it].second << "\n";
    }
}
