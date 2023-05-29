#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  std::vector<std::vector<T>> v;
  if (k > this->size()) k = mSize;
  int leftOver = this->size()%k;
  int a = this->size()-1;
  if (leftOver != 0){
    //std::cout << "yes";
    int randomVec = this->size()/k;
    int lessVec, normalVec, lessVecNum, normalVecNum;
    if (this->size()-k*randomVec > 0){
        lessVec = randomVec;
        normalVecNum = this->size()-k*randomVec;
        lessVecNum = k - normalVecNum;
        normalVec = lessVec+1;
    }else {
        normalVec = randomVec;
        lessVecNum = k*randomVec-this->size();
        normalVecNum = k - lessVecNum;
        lessVec = normalVec-1;
    }
    for (int i = 0; i < normalVecNum;i++){
        std::vector<T> v0;
        for (int j = 0; j < normalVec;j++){
             if (a >= 0)v0.push_back(mData[a--]);
        }
        v.push_back(v0);
    }
    for (int i = 0; i < lessVecNum;i++){
        std::vector<T> v0;
        for (int j = 0; j < lessVec;j++){
             if (a >= 0)v0.push_back(mData[a--]);
        }
        v.push_back(v0);
    }
  }else {
    for (int i = 0; i < k; i++){
        std::vector<T> v0;
        for (int j = 0; j < this->size()/k; j++){
           if (a >= 0)v0.push_back(mData[a--]);
           //std::cout << "2"<<"\n";
        }
        v.push_back(v0);
        //std::cout << "1"<<"\n";
    }
  }
  return v;

}
#endif
