#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    int firstNum, secondNum, sum = 0;
    cin >> firstNum >> secondNum;
    
    for(int i = secondNum + 1; i < firstNum; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}