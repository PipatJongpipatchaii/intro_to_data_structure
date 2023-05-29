#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  //write your code here
  //std::cout << &mData[0]+mSize << "\n";
  //std::cout << it << "\n";
  for (int i = 0; i < mSize; i++){
    auto it0 = &mData[i];
    //std::cout << it0+mSize <<" " << it<< "\n";
    if (it0== it){
        return true;
    }
  }
  return false;

}

#endif
