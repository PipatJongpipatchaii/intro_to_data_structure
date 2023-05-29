#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  size_t i = 0;
  while(true){
    if (i==mSize) break;
    if(mData[i] == k) return true;
    i++;
  }
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  size_t i = mSize-1;
  bool found = false;
  while(true){
    if (i==-1) break;
    if(mData[i] == k){
        found = true;
        break;
    }
    i--;
  }
  //std::cout << i;
  if (found){
    int n = 0;
    while(i!=0){
        i = (i-1)/2;
        n++;
    }
    return n;
  }
  return -1;
}

#endif

