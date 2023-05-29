#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  while(a<b){
    using std::swap;
    swap(mData[(mFront+a)%mCap],mData[(mFront+b)%mCap]);
    a++;
    b--;
  }
}

#endif
