#include <iostream>

using namespace std;

int main()
{
    int inputNo, sum = 0;
    while(true){
        cin >> inputNo;
        if(inputNo == 0){
            break;
        }
        int sum = 0;
        for(int i = inputNo; i < inputNo + 10; i++){
            if(i % 2 == 0) {
                sum += i;
            }
        }
        cout << sum <<endl;
    }

    return 0;
}
