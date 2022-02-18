#include <iostream>

using namespace std;
 
int main() {
    float A, B, C, Temp;
    cin >> A >> B >> C;
    if(A < B) { Temp = A; A = B; B = Temp; }
    if(A < C) { Temp = A; A = C; C = Temp; }
    if(B < C) { Temp = B; B = C; C = Temp; }
    
    if(A >= B+C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if(A*A == (B*B) + (C*C)){
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if(A*A > (B*B) + (C*C)){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if(A*A < (B*B) + (C*C)){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    
    if(A == B && A == C){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if((A == B && A != C) || (A == C && A != B) || (B == C && A != C)){
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}