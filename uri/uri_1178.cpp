#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double inputNo;
    cin >> inputNo;
    for(int i = 0; i < 100; i++){
        cout << "N["<< i << "] = "<< fixed << setprecision(4) << inputNo << endl;
        inputNo /= 2; 
    }

    return 0;
}