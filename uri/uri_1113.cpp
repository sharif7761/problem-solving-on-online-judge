#include <iostream>

using namespace std;
 
int main() {
    int firstNum, secondNum;
        while(true){
            cin >> firstNum >> secondNum;
            if(firstNum == secondNum) {
                break;
            }
            
            if(firstNum > secondNum){
                cout << "Decrescente"<< endl;
            }
            else {
                cout << "Crescente"<<endl;     
            }
        }
    return 0;
}