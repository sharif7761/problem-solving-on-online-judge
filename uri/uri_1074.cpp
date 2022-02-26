#include <iostream>

using namespace std;
 
int main() {
    int inputNum, numberCheck;
    string result;
    cin >> inputNum;
    for(int i = 1; i <= inputNum; i++){
        cin >> numberCheck;
        if(numberCheck > 0){
            if(numberCheck % 2 == 0){
                result = "EVEN POSITIVE";
            } else {
                result = "ODD POSITIVE";
            }
        } 
        else if(numberCheck < 0){
            if(numberCheck % 2 == 0){
                result = "EVEN NEGATIVE";
            } else {
                result = "ODD NEGATIVE";
            }
        } else {
            result = "NULL";
        }
        
        cout << result << endl;
    }
    return 0;
}