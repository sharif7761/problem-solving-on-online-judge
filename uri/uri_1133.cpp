#include <iostream>

using namespace std;

int main()
{
    int firstNum, secondNum;
    cin >> firstNum >> secondNum;
    if(firstNum > secondNum){
        int temp;
        temp = firstNum;
        firstNum = secondNum;
        secondNum = temp;
    
    }
    for(int i = firstNum + 1; i < secondNum; i++){
        if(i % 5 == 2 || i % 5 == 3){
            cout << i << endl;
        }
    }
    
    return 0;
}