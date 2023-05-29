void replace(const T& x, list<T>& y) {
  //write your code here
  auto it = begin();
  while (it!=end()){
    auto tmp = ++it;
    --it;
    if (*it==x){
        erase(it);
        for (auto n:y){
            insert(tmp,n);
        }
    }
  it = tmp;
  }

}
