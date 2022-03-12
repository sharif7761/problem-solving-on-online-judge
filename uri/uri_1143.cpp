#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int noOfline;
    cin >> noOfline;
    for(int i = 1; i <= noOfline; i++){
        cout << pow(i, 1) << " " << pow(i, 2) << " " << pow(i, 3) << endl;
    }
    return 0;
}
