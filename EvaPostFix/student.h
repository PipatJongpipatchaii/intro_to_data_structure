#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
  stack<pair<int,int>> mainStack;
  stack<pair<int,int>> waitStack;
  int firstNum;
  int secondNum;
  if (v.size()==1) return v[0].second;
  for (int i = v.size()-1; i>=0; i--){
    mainStack.push(v[i]);
  }
firstNum = mainStack.top().second;
mainStack.pop();
secondNum = mainStack.top().second;
mainStack.pop();
  while (mainStack.size()>0){
    if (mainStack.top().first == 0){
        if (mainStack.top().second == 0) secondNum = firstNum + secondNum;
        else if (mainStack.top().second == 1) secondNum = firstNum - secondNum;
        else if (mainStack.top().second == 2) secondNum = firstNum * secondNum;
        else if (mainStack.top().second == 3) secondNum = firstNum / secondNum;
        if (waitStack.size()>0&&mainStack.top().first==0) {
            firstNum = waitStack.top().second;
            waitStack.pop();
        }else if (mainStack.top().first == 1){
            firstNum = secondNum;
            secondNum = mainStack.top().second;
            mainStack.pop();
        }

    }
    else {
        pair<int,int> num = {1,firstNum};
        waitStack.push(num);
        firstNum = secondNum;
        secondNum = mainStack.top().second;
    }
    mainStack.pop();
  }
  return secondNum;


}

#endif
