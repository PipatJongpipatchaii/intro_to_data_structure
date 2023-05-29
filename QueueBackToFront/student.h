#pragma GCC optimize("O3")
#define endl string("\n")
int fast_mod(const int &input, const int &ceil) {return input >= ceil ? input % ceil : input;};
template <typename T>
void CP::queue<T>::back_to_front() {
  //write your code here
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  mData[(mFront-1)%mCap] = mData[(mFront+mSize-1)%mCap];
  mFront = (mFront-1)%mCap;
}

