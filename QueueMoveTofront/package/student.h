#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    if (pos >= mSize-1) pos = mSize-1;
    auto toFront = mData[(mFront+pos)%mCap];
    //std::cout << toFront << "\n";
    for (size_t i = pos; i !=0; i--){
        mData[(i+mFront)%mCap] = mData[(i+mFront-1)%mCap];
    }
    mData[(mFront)] = toFront;

}

#endif
