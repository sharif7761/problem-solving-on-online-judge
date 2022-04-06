#include <iostream>

using namespace std;

int main()
{
    int inputNo, temp = 0, array[20];
    
    for(int i = 0; i < 20; i++){
        cin >> inputNo;
        array[i] = inputNo;
    }
    for(int j = 19; j >= 0; j--){
        cout << "N["<< temp <<"] = " << array[j] << endl;
        temp++;
    }

    return 0;
}
