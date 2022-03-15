#include <iostream>

using namespace std;

int main()
{
    int num, row1=0, row2=0, row3=0;
    int A[100][100];
    cin >> num;
    for(int i = 0; i < num; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
        row1 += A[i][0];
        row2 += A[i][1];
        row3 += A[i][2];
    }
    if(row1 == 0 && row2 == 0 && row3 == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}