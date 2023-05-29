#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    for (int i = 0; i < n; i++){
        int mFront, mSize, mCap, last, correction;
        int correct[4];
        bool mistake = false;
        cin >> mFront >> mSize >> mCap >> last >> correction;
        int rFront = mFront, rSize = 0, rCap = mCap, rLast = rLast;
        if (correction == 3){
            rCap =  rCap = mSize + mFront -last;
        }
        if (mCap < mSize || mCap < last || mCap < mFront){
            if (last >= mSize){
                rCap = last+1;
            }else if (last <= mSize){
                rCap = mSize + mFront - last;
            }
            mistake = true;
        }
        if (mCap > 0){
            rFront = last - mSize;
            if (last<mSize){
                rFront += mCap;
            }
            while (true){
                if ((mFront+rSize)%mCap == last){
                    //mistake  = true;
                    if (rSize == 0 && mSize==mCap) rSize = mSize;
                    else if (rSize == 0 && mFront == last) rSize = 0;
                    break;
                }else if (rSize > mCap){
                    rSize = mSize;
                    break;
                }
                rSize++;

            }
            rLast = (mFront+mSize)%mCap;
        }

        if (rFront != mFront){
            mistake = true;
        }
        else if (rSize != mSize){
            mistake = true;
        }
        else if (rLast != last){
            mistake = true;
        }
        correct[0] = rFront;
        correct[1] = rSize;
        correct[2] = rCap;
        correct[3] = rLast;
        for (int i = 0; i < 4; i++){
            cout << correct[i] << " ";
        }
        cout << "\n";
        if (mistake){
            if (correction == 0) cout << "WRONG" << "\n";
            else cout << "WRONG "<< correct[correction-1] << "\n";
        }else cout << "OK" << "\n";

    }
    return 0;
}
