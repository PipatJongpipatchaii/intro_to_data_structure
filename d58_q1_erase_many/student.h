#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  /*
  CP::vector<T> nv;
  int j = 0;
  for (int i = 0; i < mSize; i++){
    if ((j<pos.size()) && (i == pos[j])){
        j++;
    }else {
        nv.push_back(mData[i]);
    }
  }
  for (int n : nv){
    std::cout << n;
  }
    using std::swap;
    swap(this->mSize, nv.mSize);
    swap(this->mCap, nv.mCap);
    swap(this->mData, nv.mData);
    */
    int j = 0;
    auto it = this->begin();
    while (j<pos.size()){
        if (it-pos[j]+j == this->begin()){
            auto nt  = it;
            while (nt+1 != this->end()){
                *nt = *(nt+1);
                nt++;
            }
            mSize--;
            j++;
        }else it++;
    }


}

#endif
