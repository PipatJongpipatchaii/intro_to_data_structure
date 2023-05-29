#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    int sp0 = this->mCap - this->mSize;
    int sp1 = other.mCap - other.mSize;
    if (sp0<sp1) return -1;
    return sp0 > sp1;
}

#endif
