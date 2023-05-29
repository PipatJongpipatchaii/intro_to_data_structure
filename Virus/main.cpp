#include <iostream>
#include <math.h>
using namespace std;

void checkVirus(int &start,int &end,int j,int &frontLen,bool &revfront,int &prevdna,bool &isVirus,int &nexxtSave,int &prevBack,int &toCheck,int dnaLen,int dna){
        if (j==start&&dna==0) {
            revfront = true;
            prevBack = dna;
        }
        if (j==nexxtSave)prevBack = dna;
        if (j<start+frontLen && j+1 == toCheck+start){
            toCheck *= 2;
            if (revfront&&(dna==0)){
                isVirus = false;
                //break;
            }else if(prevBack==0&&dna==0)isVirus=false;
            nexxtSave = j+1;
        }
        if (j%2==0){
            prevdna = dna;
        }else{
            if (dna==prevdna){
                isVirus=false;
                //break;
            }
        }
        if (j==dnaLen-1&&dna==0){
            isVirus=false;
            //break;
        }
        if (j==end){
            start = end+1;
            frontLen/=2;
            end = start+frontLen-1;
            toCheck = 2;
            revfront = false;
            nexxtSave = start;
        }
}

int main()
{
    int test,k;
    cin >> test >> k;
    int dnaLen = pow(2,k);
    for (int i = 0; i < test; i++){
        int start = 0;
        int frontLen = dnaLen/2;
        int end = start+dnaLen/2-1;
        bool revfront = false;
        int prevdna;
        bool isVirus = true;
        int nexxtSave = 0;
        int prevBack;
        int toCheck = 2;
        for (int j = 0; j < dnaLen;j++){
            int dna;
            cin >> dna;
            checkVirus(start,end,j,frontLen,revfront,prevdna,isVirus,nexxtSave,prevBack,toCheck,dnaLen,dna);
        }
        if (isVirus) cout << "yes";
        else cout << "no";
        cout << "\n";
    }
}
