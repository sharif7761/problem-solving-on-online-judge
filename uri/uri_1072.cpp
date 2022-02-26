#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    int noOfInputs, inputNum, count = 0;
    cin >> noOfInputs;
    for(int i = 0; i < noOfInputs; i++){
        cin >> inputNum;
        if(inputNum >= 10 && inputNum <= 20){
            count ++;
        }
    }
    cout << count << " in" << endl;
    cout << noOfInputs - count << " out" << endl;
    return 0;
}