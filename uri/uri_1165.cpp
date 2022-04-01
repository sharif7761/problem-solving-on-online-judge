#include <iostream>

using namespace std;

int main()
{
    int inputNo, checkNo;
    cin >> inputNo;
    for(int i = 0; i < inputNo; i++){
        cin >> checkNo;
        int count = 0;
        for(int j = 1; j <= checkNo; j++){
            if(checkNo % j == 0){
                count++;
            }
        }
        if(count == 2){
            cout << checkNo << " eh primo" << endl;
        } else {
            cout << checkNo << " nao eh primo" << endl;
        }
    }

    return 0;
}
