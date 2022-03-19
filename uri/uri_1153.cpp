#include <iostream>

using namespace std;

int main()
{
    int inputNo, factorial = 1;
    cin >> inputNo;
    for(int i = inputNo; i >= 1; i--){
        factorial = factorial * i;
    }
    cout << factorial << endl;

    return 0;
}
