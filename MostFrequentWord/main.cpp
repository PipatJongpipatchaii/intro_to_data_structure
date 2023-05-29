#include <iostream>
#include <map>
using namespace std;

int main()
{
     map<string,int> wordsCount;
     int amt;
     cin >> amt;
     int max = 1;
     string maxWord;
     for (int i = 0; i<amt; i++){
        string word;
        cin >> word;
        if (wordsCount.find(word)== wordsCount.end()){
            wordsCount[word] = 0;
        }
        wordsCount[word] +=1;
     }
     for (map<string, int>::iterator it = wordsCount.begin(); it != wordsCount.end(); it++  ){
        if ((it->second)>=max){
            maxWord = it->first;
            max = it->second;
        }
     }
     cout <<maxWord << " "<<max;
}
