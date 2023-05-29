#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  T *newVec = new T[mSize+last-first];
  int j = 0;
  iterator it = first;
  for (int i = 0; i <= mSize;i++){
    if (position == &mData[i]){
        //std::cout <<"yes";
        for (int k = 0; k < last-first; k++){
            //std :: cout << *it << " ";
            newVec[j++] = *(it++);
        }
    }
    if (i<mSize) newVec[j++] = mData[i];
  }
  delete [] mData;
  mData = newVec;
  mSize = mSize+last-first;
  ensureCapacity(mSize);
}

#endif
