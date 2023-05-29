#include <iostream>
#include <queue>
#include <set>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int codedNum, passNum, codes;
    queue<int> codesQ;
    queue<string> passQ;
    set<string> database;
    cin >> codedNum >> passNum >> codes;
    for (int i = 0; i < codes; i++){
        int code;
        cin >> code;
        code%=26;
        codesQ.push(code);
    }
    for (int i = 0; i < codedNum; i++){
        string word;
        cin >> word;
        database.insert(word);
    }
    for (int i = 0; i < passNum; i++){
        string word;
        cin >> word;
        for (int j = 0; j < codes; j++){
            int code = codesQ.front();
            if (word.at(j)+code > 122){
                word.at(j) = 96+(word.at(j)+code-122);

            }
            else word.at(j) = (word.at(j)+code);
            codesQ.pop();
            codesQ.push(code);
        }

        passQ.push(word);
    }

    while (passQ.size()>0){
        if (database.find(passQ.front())!=database.end()){
            cout << "Match" << "\n";
        }else cout << "Unknown"<<"\n";
        passQ.pop();
    }
}
