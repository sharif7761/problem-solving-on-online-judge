#include <iostream>

using namespace std;

int main()
{
    int arraySize, inputNo, smallestValue, smallestValueIndex = 0;
    cin >> arraySize;
    cin >> smallestValue;
    for(int i=1; i < arraySize; i++){
        cin >> inputNo;
        if(inputNo < smallestValue){
            smallestValue = inputNo;
            smallestValueIndex = i;
        }
    }
    cout << "Menor valor: "<< smallestValue << endl;
    cout << "Posicao: "<< smallestValueIndex << endl;

    return 0;
}