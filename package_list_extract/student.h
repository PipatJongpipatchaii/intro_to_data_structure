#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  if (mSize>0){
    while(a!=b){
        if (a==b) break;
        if (*a == value){
            auto tmp = ++a;
            --a;
            a.ptr->prev->next = a.ptr->next;
            a.ptr->next->prev = a.ptr->prev;
            a.ptr->prev = output.mHeader;
            a.ptr->next = output.mHeader->next;
            output.mHeader->next->prev = a.ptr;
            output.mHeader->next = a.ptr;
            output.mSize += 1;
            mSize -= 1;
            a = tmp;
        }else ++a;
    }
  }


}

#endif
