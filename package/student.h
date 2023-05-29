#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
  // your code here
  auto tmp = mHeader->next->next;
  mHeader->next->next->prev = mHeader;
  mHeader->next->next = mHeader;
  mHeader->next->prev = mHeader->prev;
  mHeader->prev->next = mHeader->next;
  mHeader->prev = mHeader->next;
  mHeader->next  = tmp;


}

#endif
