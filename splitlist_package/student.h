void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    auto it0 = begin();
    size_t l1 = mSize/2;
    size_t l2 = mSize/2;
    if (mSize%2!=0) l1++;
    for(int i = 0; i < l1; i++){
        auto tmp = ++it0;
        --it0;
        auto it = list1.end();
        it.ptr->prev->next = it0.ptr;
        it0.ptr->next = it.ptr;
        it0.ptr->prev = it.ptr->prev->prev;
        it.ptr->prev = it0.ptr;
        it0 = tmp;
        list1.mSize++;
    }
    for(int i = 0; i < l2; i++){
        auto tmp = ++it0;
        --it0;
        auto it = list2.end();
        it.ptr->prev->next = it0.ptr;
        it0.ptr->next = it.ptr;
        it0.ptr->prev = it.ptr->prev->prev;
        it.ptr->prev = it0.ptr;
        it0 = tmp;
        list2.mSize++;
    }
    mSize = 0;
    mHeader->prev = mHeader;
    mHeader->next = mHeader;
}
