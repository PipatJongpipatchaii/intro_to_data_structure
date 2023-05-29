#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  //T *temp =new T[m];
  auto it1 = a;
  auto it2 = b;
  if (m <= 0) return false;
  else if (!(a >= begin()&& a < end())) return false;
  else if (!(a + m - 1 < end())) return false;
  else if (!(b >= begin() && b < end()))return false;
  else if (!(b + m - 1 < end()))return false;
  else if (!(a + m - 1 < b || a > b + m - 1)) return false;
  for (int i = 0; i < m; i++){
    std::swap(*it1,*it2);
    it1++;
    it2++;
  }
  return true;
}


#endif
