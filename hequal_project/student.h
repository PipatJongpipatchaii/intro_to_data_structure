#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {

  //write your code here
  if (mSize!=other.mSize) return false;
  T a[mSize];
  T b[other.mSize];
  for (size_t i = 0; i < mSize; i++){
    a[i] = mData[i];
  }
  for (size_t i = 0; i < mSize; i++){
    b[i] = other.mData[i];
  }
  std::sort(a,a+mSize,mLess);
  std::sort(b,b+mSize,other.mLess);
  for(int i = 0; i < mSize  ; i++){
    if (a[i]!=b[i]) return false;
  }
  return true; // you can change this line
}

#endif
