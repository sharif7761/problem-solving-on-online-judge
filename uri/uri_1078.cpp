#include <iostream>

using namespace std;
 
int main() {
    int inputNum;
    cin >> inputNum;
    for(int i = 1; i <= 10; i++){
        cout << i << " x " << inputNum << " = " << (i*inputNum) << endl;
    }
    return 0;
}