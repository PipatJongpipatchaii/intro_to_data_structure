#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>
#include <algorithm>
//you can include any other file here
//you are allow to use any data structure


template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::set<T> s;
  T *newVec = new T[mSize];
  int newSize = 0;
  int j = 0;
  for (int i = 0; i < mSize; i++){
    //std::cout << mData[i] << " ";
    if (s.find(mData[i])== s.end()){
        newVec[j++] = mData[i];
        //std::cout << newVec[i] << " ";
        s.insert(mData[i]);
        newSize++;
    }

  }
  /*
  for (int i = 0; i < newSize; i++){
    std::cout << newVec[i] << " ";
  }
  std::cout << "\n";*/
  delete [] mData;
  mData = newVec;
  resize(newSize);
  ensureCapacity(newSize);
}

#endif
