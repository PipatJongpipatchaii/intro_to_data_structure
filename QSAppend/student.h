#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        T *temp = new T[mSize+s.mSize];
        size_t a = 0;
        for (size_t i = 0; i < s.mSize; i++){
            temp[a++] = s.mData[i];
            //std::cout << s.mData[i];
        }
        for (size_t i = 0; i < mSize; i++){
            temp[a++] = mData[i];
            //std::cout << mData[i];
        }
        /*for (int i = 0; i < mSize+s.mSize; i++){
            std::cout << temp[0] << " ";
        }
        std::cout <<"\n";*/
        delete [] mData;
        mData = temp;
        mSize = a;
        mCap = a;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        T *temp = new T[mSize+q.mSize];
        size_t a = q.mSize-1;
        for (size_t i = 0; i < q.mSize; i++){
            temp[a--] = q.mData[(i+q.mFront)%q.mCap];
        }
        a = q.mSize;
        for (size_t i = 0; i < mSize; i++){
            temp[a++] = mData[i];
        }
        delete [] mData;
        mData = temp;
        mSize = a;
        mCap = a;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        for (int i = s.mSize-1; i >= 0; i--){
            this->push(s.mData[i]);
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        for (int i = 0; i < q.mSize; i++){
            this->push(q.mData[(q.mFront+i)%q.mCap]);
        }
    }
}
