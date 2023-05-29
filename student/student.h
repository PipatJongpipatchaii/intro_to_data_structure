#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    int dcount = b-a+1;
    b++;
    CP::stack<T> temp;
    while (b--){
        temp.push(this->top());
        pop();
    }
    while (!temp.empty()){
        push(temp.top());
        if (dcount!=0){
            push(temp.top());
            dcount--;
        }
        temp.pop();
    }
}

#endif
