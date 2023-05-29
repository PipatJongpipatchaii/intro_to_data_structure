#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  auto it0 = first;
  int size = 0;
  while (it0!=last){
    size++;
    it0++;
  }
  T *temp = new T[size];
  auto it = first;
  for(int i = size-1;i >=0; i--){
    //std::cout << *it <<"\n";
    temp[i] = *(it++);
  }
  //delete [] mData;
  mData = temp;
  mSize = size;
  mCap = size;
  //delete [] s.mData;
}

#endif
