#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    T *nv = new T[mSize];
    for (int i = 0; i < mSize; i++){
        nv[i] = mData[i];
    }
    delete [] mData;
    mData = nv;
    mCap = mSize;
}

#endif
