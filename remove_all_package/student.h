#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  auto it = begin();
  while(it!=end()){
    auto tmp = --it;
    ++it;
    //std::cout << *it << " ";
    if (*it==value){
        it.ptr->next->prev = it.ptr->prev;
        it.ptr->prev->next = it.ptr->next;
        delete it.ptr;
        mSize--;
        it = ++tmp;
    }else ++it;
  }
}

#endif
