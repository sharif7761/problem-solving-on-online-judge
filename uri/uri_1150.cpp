#include <iostream>

using namespace std;

int main()
{
    int X, Z, sum = 0, count = 0;
    cin >> X;
    while(true){
        cin >> Z;
        if(X < Z){
            break;
        }
    }
    for(int i = X; i < Z; i++){
        if(sum <= Z){
            sum += i;
            count++;
        } else {
            break;
        }
    }
    cout << count << endl;

    return 0;
}