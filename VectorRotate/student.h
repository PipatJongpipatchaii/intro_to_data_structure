#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  if (k!=0){
    CP::vector<T> v;
    int j = 0;
    auto it = first;
    auto itO = first+k;
    while (itO != last){
        v.push_back(*it);
        //std::cout << *it << " ";
        *it = *itO;
        it++;
        itO++;
    }
    while (it < last){
        if (v.size()<last-first)v.push_back(*it);
        //std::cout << v[j] << " ";
        *it = v[j++];
        it++;
    }
  }
}

#endif

