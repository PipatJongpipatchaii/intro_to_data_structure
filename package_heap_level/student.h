#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include <math.h>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;
  size_t i = 0;
  if (empty()) return r;
  if (k==0){
    r.push_back(mData[0]);
    return r;
  }
  if ((pow(2,k)-1)>mSize) return r;
  size_t start = pow(2,k)-1;
  //std::cout << start <<"\n";
  while(true){
    if (start>mSize-1)break;
    if (start>=pow(2,k+1)-1)break;
    r.push_back(mData[start]);
    //std::cout << mData[start]<<"\n";
    start++;
  }
  sort(r.rbegin(),r.rend(),mLess);
  return r;
}

#endif

