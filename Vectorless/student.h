#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  auto it0 = &mData[0];
  auto it1 = &other.mData[0];
  bool notReturn = true;
  if (mSize == 0 && other.size()==0)return false;
  else if (mSize == 0) return true;
  else if (other.size()==0) return false;
  while (notReturn){
    if ((it0 == &mData[mSize-1])&&(it1==&other.mData[other.mSize-1])){
        //std::cout <<"--1--" << "\n";
        notReturn = false;
    }
    else if (it0 == &mData[mSize-1]){
        //std::cout <<"--2--" << "\n";
        if (*it0 == *it1) return true;
        notReturn = false;
    }else if (it1==&other.mData[other.mSize-1]){
        if (*it0 == *it1) return false;
        notReturn = false;
    }
    if (*it0 != *it1){
        //std::cout <<"--3--" << "\n";
        notReturn = false;
    }
    it0++;
    it1++;
  }
  it0--;
  it1--;
  return *it0 < *it1;
}

#endif
