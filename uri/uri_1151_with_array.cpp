#include <iostream>

using namespace std;

int main()
{
    int inputNo, fib[46];
    cin >> inputNo;
    fib[0] = 0;
    fib[1] = 1;
    cout<< fib[0] << " ";
    cout<< fib[1] << " ";
    for(int i = 2; i < inputNo; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
        if(i == inputNo - 1){
            cout << fib[i] << endl;
            break;
        }
        else {
            cout << fib[i] << " ";
        }
    }

    return 0;
}
