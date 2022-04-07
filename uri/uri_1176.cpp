#include <iostream>

using namespace std;

int main()
{
    int inputNo, checkValue;
    long long fib[61];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    cin >> inputNo;
    for(int j = 0; j < inputNo; j++){
        cin >> checkValue;
        cout << "Fib("<< checkValue << ") = "<< fib[checkValue] <<endl;
    }

    return 0;
}
