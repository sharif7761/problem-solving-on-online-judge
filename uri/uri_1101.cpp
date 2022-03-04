#include <iostream>

using namespace std;
 
int main() {
    int numOfInput, firstNum, secondNum, temp;
        while(true){
            int sum = 0;
            cin >> firstNum >> secondNum;
            if(firstNum <= 0 || secondNum <= 0) {
                break;
            }
        
            if(firstNum > secondNum){
                temp = secondNum;
                secondNum = firstNum;
                firstNum = temp;
            }
            for(int j = firstNum; j <= secondNum; j++){
                cout << j << " ";
                sum += j;
            }
            cout << "Sum="<< sum << endl;    
        }
        
    return 0;
}