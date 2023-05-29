#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<T,size_t> stock;
    std::vector<std::pair<T,size_t>> counted;
    for (int i = 0; i < mSize; i++){
        T data = mData[(mFront+i)%mCap];
        if (stock.find(data)==stock.end()){
            stock[data] = 0;
        }
        stock[data]++;
    }for (int i = 0; i < k.size(); i++){
        std::pair<T,size_t> p = {k[i],stock[k[i]]};
        counted.push_back(p);
    }
    return counted;
}

#endif
