#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  if (m>=s2.size()) m = s2.size();
  if (m <= 0) m = 0;
  if (k>=mSize) k = mSize;
  if (k <= 0) k = 0;
  T *newData = new T[m+mSize];
  int a = 0;
  for (int i = 0; i < m+mSize; i++){
    if (i == mSize-k){
        for (int j = s2.size()-m; j < s2.size(); j++){
            newData[i++] = s2.mData[j];
        }
    }
    if (a<mSize) newData[i] = mData[a++];
  }
  delete [] mData;
  mData= newData;
  mSize = m+mSize;
  mCap = mSize;
  s2.mSize -= m;
}
#endif
