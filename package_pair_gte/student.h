#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T1,typename T2>
bool CP::pair<T1,T2>::operator>=(const pair<T1,T2>& other) const {
  //write your code here
  if (this->first > other.first) return true;
  else if (this->first == other.first)  {
    if ((this->second).compare(other.second)>=0) return true;
  }
  return false;
}

#endif
