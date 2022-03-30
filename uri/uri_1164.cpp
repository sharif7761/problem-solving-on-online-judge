#include <iostream>

using namespace std;

int main()
{
    int inputNo, checkNo;
    cin >> inputNo;
    for(int i = 0; i < inputNo; i++){
        cin >> checkNo;
        int sum = 0;
        for(int j = 1; j < checkNo; j++){
            if(checkNo % j == 0){
                sum += j;
            }
        }
        if(checkNo == sum){
            cout << checkNo << " eh perfeito" << endl;
        } else {
            cout << checkNo << " nao eh perfeito" << endl;
        }
    }

    return 0;
}