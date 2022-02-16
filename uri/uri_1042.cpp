#include <iostream>

using namespace std;
 
int main() {
    int A, B, C, Temp, I, J, K;
    cin >> A >> B >> C;
    I = A;
    J = B;
    K = C;
    if(A > B) { Temp = A; A = B; B = Temp; }
    if(A > C) { Temp = A; A = C; C = Temp; }
    if(B > C) { Temp = B; B = C; C = Temp; }
    
    cout << A << endl << B << endl << C << endl << endl;
    cout << I << endl << J << endl << K << endl;
    
    return 0;
}