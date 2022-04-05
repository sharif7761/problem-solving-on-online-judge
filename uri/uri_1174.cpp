#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float inputNo;
    for(int i=0; i<100;i++){
        cin >> inputNo;
        if(inputNo <= 10){
            cout << "A[" << i << "] = " << fixed << setprecision(1) << inputNo << endl;
        }    
    }
    return 0;
}