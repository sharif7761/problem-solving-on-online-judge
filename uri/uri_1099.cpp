#include <iostream>

using namespace std;
 
int main() {
    int numOfInput, firstNum, secondNum, temp;
    cin >> numOfInput;
    for (int i = 1; i <= numOfInput; i++) {
        int sum = 0;
        cin >> firstNum >> secondNum;
        if(firstNum > secondNum){
            temp = secondNum;
            secondNum = firstNum;
            firstNum = temp;
        }
        for(int j = firstNum + 1; j < secondNum; j++){
            if(j % 2 != 0){
                sum += j;
            }
        }
        cout << sum << endl;
    }
    return 0;
}