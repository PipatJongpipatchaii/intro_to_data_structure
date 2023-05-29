void shift(int k) {
	// TODO: Add your code here
    if (mSize == 1) return;
    if (k>0){
        if (k>=mSize) k = k%mSize;
        for(int i = 0; i < k; i++){
            auto tmp = mHeader->next->next;
            mHeader->next->next->prev = mHeader;
            mHeader->next->prev = mHeader->prev;
            mHeader->next->next = mHeader;
            mHeader->prev->next = mHeader->next;
            mHeader->prev = mHeader->next;
            mHeader->next = tmp;

        }
    }else if (k<0){
        k = -k;
        if (k>=mSize) k = (k)%mSize;
        for(int i = 0; i < k; i++){
            auto tmp = mHeader->prev->prev;
            mHeader->prev->prev->next = mHeader;
            mHeader->prev->next = mHeader->next;
            mHeader->prev->prev = mHeader;
            mHeader->next->prev = mHeader->prev;
            mHeader->next = mHeader->prev;
            mHeader->prev = tmp;

        }
    }
}
