#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  size_t n = mSize-1;
  if (n==-1)return -1;
  int i = 0;
  while (true){
    if (n == 0) break;
    n = (n-1)/2;
    i++;
  }
  return i;
}

#endif

