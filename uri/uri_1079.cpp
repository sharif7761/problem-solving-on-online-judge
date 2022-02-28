#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    int inputNum;
    float valueOne, valueTwo, valueThree, avg;
    cin >> inputNum;
    for(int i = 1; i <= inputNum; i++){
        cin>>valueOne>>valueTwo>>valueThree;
        avg = ((valueOne * 2) + (valueTwo * 3) + (valueThree * 5)) / 10; 
        cout << fixed << setprecision(1) << avg << endl;
    }
    return 0;
}