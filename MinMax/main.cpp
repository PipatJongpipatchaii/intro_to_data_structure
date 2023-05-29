#include <iostream>
#include <array>
using namespace std;

int main()
{
    int rows,cols;
    cin >> rows >> cols;
    int maxCount;
    cin >> maxCount;
    int matrix[rows][cols];
    string maxNumbers[maxCount];
    for (int i = 0 ; i < rows ; i++){
        for (int j = 0;j < cols; j++){
            int number;
            cin >> number;
            matrix[i][j] = number;
        }
    }
    for (int i = 0 ; i < maxCount ; i ++){
        int r1,r2,c1,c2;
        cin >> r1 >> c1 >> r2 >> c2;
        r1 -= 1;
        r2 -= 1;
        c1 -= 1;
        c2 -= 1;
        if ((r1 > r2)||(c1 > c2)){
            maxNumbers[i] = "INVALID";
        }
        else if ((r1>=rows)||(c1>=cols)){
            maxNumbers[i] = "OUTSIDE";
        }
        else if ((r2<0)||(c2<0)){
            maxNumbers[i] = "OUTSIDE";
        }
        else {
            int max ;
            string strMax;
            if (r1<0) r1 = 0;
            if (r2>=rows) r2 = rows-1;
            if (c1<0) c1 = 0;
            if (c2 >=cols) c2 = cols-1;
            for (int i = r1; i <r2+1;i++){
                for (int j = c1; j < c2+1; j++){
                    if ((i==r1)&&(j==c1)) max = matrix[i][j];
                    else if (matrix[i][j]>max) max = matrix[i][j];
                }
            }
            if (max < 0) {
                max *= -1;
                strMax = to_string(max);
                strMax = "-"+strMax;
            }
            else {
                strMax = to_string(max);
            }
            maxNumbers[i] = strMax;
        }

    }
    for (int i = 0 ; i < maxCount ;i++){
        cout << maxNumbers[i] << "\n";
    }
}

