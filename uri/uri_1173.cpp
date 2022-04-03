#include <iostream>

using namespace std;

int main()
{
    int inputNo;
    cin >> inputNo;
    for(int i=0; i<10;i++){
        cout << "N[" << i << "] = " << inputNo << endl;
        inputNo *= 2;
    }

    return 0;
}
