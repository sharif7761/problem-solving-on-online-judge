#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    int inputNum, temp = 0, pos = 0;
    for(int i = 1; i <= 100; i++){
        cin >> inputNum;
        if(inputNum > temp){
            temp = inputNum;
            pos = i;
        }
    }
    cout << temp << endl << pos << endl;
    return 0;
}