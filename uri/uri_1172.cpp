#include <iostream>

using namespace std;

int main()
{
    int inputNo;
    for(int i=0; i<10;i++){
        cin >> inputNo;
        if(inputNo <= 0){
            inputNo = 1;
        }
         cout << "X[" << i << "] = " << inputNo << endl;
    }

    return 0;
}