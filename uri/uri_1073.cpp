#include <iostream>

using namespace std;
 
int main() {
    int inputNum;
    cin >> inputNum;
    for(int i = 1; i <= inputNum; i++){
        if(i % 2 == 0){
            cout << i  << "^2 = " << i * i << endl;
        }
    }
    return 0;
}