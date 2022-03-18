#include <iostream>

using namespace std;

int main()
{
    int inputNo, x = 0, y = 1, temp, count = 2;
    cin >> inputNo;
    cout<< x << " ";
    cout<< y << " ";
    while(true){
        if(inputNo - 1 == count){
            cout << x + y << endl;
            break;
        }
        else {
            cout << x + y << " ";
            temp = y;
            y = x + y;
            x = temp;
            count++;
        }
    }

    return 0;
}
