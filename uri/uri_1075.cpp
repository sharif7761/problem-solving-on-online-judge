#include <iostream>

using namespace std;
 
int main() {
    int inputNum;
    cin >> inputNum;
    for(int i = 2; i < 10000; i++){
        if(i % inputNum == 2)
        cout << i << endl;
    }
    return 0;
}