#include <iostream>

using namespace std;

int main()
{
    int inputNo, X, Y;
    cin >> inputNo;
    for(int i = 0; i < inputNo; i++){
        int sum = 0;
        cin >> X >> Y;
        for(int j = X; j < (X + (Y*2)); j++){
            if(j % 2 != 0){
                sum += j;
            }
        }
        cout << sum <<endl;
    }
    

    return 0;
}
