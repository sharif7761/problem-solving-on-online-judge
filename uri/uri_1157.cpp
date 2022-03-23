#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int inputNo;
    cin >> inputNo;
    for(int i = 1; i <= inputNo; i++){
        if(inputNo % i == 0){
            cout << i << endl;
        }
    }
    return 0;
}