#include <iostream>

using namespace std;

int main()
{
    int firstNum, secondNum, sum = 0;
    cin >> firstNum >> secondNum;
    if(firstNum > secondNum){
        int temp;
        temp = firstNum;
        firstNum = secondNum;
        secondNum = temp;
    }
    for(firstNum; firstNum <= secondNum; firstNum++){
        if(firstNum % 13 != 0){
            sum += firstNum;
        }
    }
    cout << sum << endl;
    return 0;
}