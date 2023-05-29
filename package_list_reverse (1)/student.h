#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  auto tmpa = a;
  --b;
  auto tmpb = b;
  if (mSize>0){
    while(a!=b){
        if (--a==b) break;++a;
        std::swap(*a,*b);
        ++a;
        --b;
    }
  }
  return tmpa;

}

#endif
