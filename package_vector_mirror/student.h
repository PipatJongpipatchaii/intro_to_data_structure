#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  CP::vector<T> nv(mSize*2);
  int i = 0;
  for(auto it = this->begin(); it != this->end(); it++){
    *(nv.begin()+i) = *it;
    i++;
  }
  for(auto it = this->end()-1; it >= this->begin(); it--){
    *(nv.begin()+i) = *it;
    i++;
  }
  using std::swap;
    swap(this->mSize, nv.mSize);
    swap(this->mCap, nv.mCap);
    swap(this->mData, nv.mData);

}

#endif
