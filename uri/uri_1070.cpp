#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    int num;
    cin >> num;
    
    if(num % 2 == 0) {
        num++;
    }
    for(int i = 0; i < 6; i++){
        cout << num << endl;
        num += 2;
    }
    return 0;
}