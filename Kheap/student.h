#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];
      while (idx > 0) {
        size_t p = (idx - 1) / 4;
        if ( mLess(tmp,mData[p]) ) break;
        mData[idx] = mData[p];
        idx = p;
      }
      mData[idx] = tmp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
      size_t c = 4 * idx + 1;
      while (c < mSize) {
        size_t m = 0;
        for (int i = 1; i < 4; i++){
            if (c+m < mSize && mLess(mData[c+m],mData[c+i])) m = i;
        }
        c += m;
        //std::cout << c;
        if ( mLess(mData[c],tmp) ) break;
        mData[idx] = mData[c];
        idx = c;
        c = idx*4+1;
      }
      mData[idx] = tmp;
}

#endif
