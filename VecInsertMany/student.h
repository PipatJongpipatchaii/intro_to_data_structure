#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  sort(data.begin(),data.end());
  /*for (int i = 0; i < mSize; i++){
    std::cout << mData[i] << " ";
  }
  std::cout  << "\n";*/
  T *newVec = new T[mSize+data.size()];
  int k = 0;
  int j = 0;
  for (int i = 0; i < data.size(); i++){
    for (j; j < data[i].first+i;j++ ){
        newVec[j] = mData[k];
        k++;
    }
    newVec[j++] = data[i].second;
  }
  for (k; k< mSize ;k++){
    newVec[j++] = mData[k];
  }
  delete [] mData;
  mData = newVec;
  mSize = mSize+data.size();
  ensureCapacity(mSize);
}

#endif
