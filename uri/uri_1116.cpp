#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int noOfInput, X, Y;
    float result;
    cin >> noOfInput;
    for(int i = 0; i < noOfInput; i++){
        cin >> X >> Y;
        if(Y == 0){
            cout << "divisao impossivel" <<endl;
        } else {
            result = (float)X / (float)Y;
            cout << fixed << setprecision(1) << result << endl;
        }
        
    }
    return 0;
}
