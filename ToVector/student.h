#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  if (k>mSize) k = mSize;
  //write your code only here
  //
  for (int i = 0; i < k; i++){
    res.push_back(mData[(mFront+i)%mCap]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  T *temp = new T[to-from];
  int a = 0;
  for (auto it = from; it != to; it++){
    temp[a++] = *it;
  }
  mData = temp;
  mSize = a;
  mCap = a;
  mFront = 0;
}

#endif
