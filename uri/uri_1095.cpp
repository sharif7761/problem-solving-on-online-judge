#include <iostream>
 
using namespace std;
 
int main() {
    int I = 1, J = 60;
    while(J >= 0){
        cout << "I=" << I << " J="<< J << endl;
        J -= 5;
        I += 3;
    }
    return 0;
}