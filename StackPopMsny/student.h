#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  if (K >= mSize){
    mSize = 0;
  }else{
    mSize -= K;
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  if (K >= mSize) K = mSize;
  std::stack<T> toReturn;
  for (int i = mSize-K
       ; i < mSize; i++){
    toReturn.push(mData[i]);
  }
  mSize-=K;
  return toReturn;
}

#endif
