#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  T *temp = new T[mSize+1];
  int realPos = mSize-pos;
  int j = 0;
  for (int i = 0; i < mSize+1;i++){
    if (i==realPos) {
        temp[i] = value;
    }
    else {
        temp[i] = mData[j];
        j++;
    }
  }
  delete [] mData;
  mData = temp;
  mSize = mSize+1;
  mCap = mSize;
}

#endif
