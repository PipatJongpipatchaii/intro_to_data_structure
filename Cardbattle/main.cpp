#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int cardNumber, enemyNum,played,point;
    point=1;
    played = 0;
    bool gameEnd = false;
    cin >> cardNumber >> enemyNum;
    map<int,int> myCards;
    for (int i = 0; i < cardNumber; i++){
        int card;
        cin >> card;
        if (myCards.find(card)==myCards.end()){
            myCards[card] = 0;
        }
        myCards[card] += 1;
    }
    for (int i = 0; i < enemyNum; i++){
        int eCardNum;
        cin >> eCardNum;
        played += point;
        for (int j = 0; j < eCardNum; j++){
            int eCard;
            cin >> eCard;
            if (gameEnd)continue;
            auto it = myCards.upper_bound(eCard);
            if (it!=myCards.end()){
                it -> second -= 1;
                if ( it-> second ==0){
                    myCards.erase(it);
                }
            }else{
                gameEnd = true;
                point = 0;
            }
        }
        if ((!gameEnd)&&(i == enemyNum-1)){
            played += 1;
            gameEnd = true;
        }
    }
    cout << played;
}
