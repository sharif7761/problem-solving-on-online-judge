#include <iostream>

using namespace std;

int main()
{
    int inputNo, count = 0;
    cin >> inputNo;
    for(int i = 0; i < 1000; i++){
        cout << "N["<< i << "] = "<< count <<endl;
        count++;
        if(count == inputNo){
            count = 0;
        }
    }

    return 0;
}
