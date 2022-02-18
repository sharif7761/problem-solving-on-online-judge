#include <iostream>

using namespace std;
 
int main() {
    int A, B, RESULT;
    cin >> A >> B;
    
    if(A == B) { 
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    } else if (A > B) {
        RESULT = (B + 24) -A;
        cout << "O JOGO DUROU "<< RESULT <<" HORA(S)" << endl;
    } else {
        RESULT = B - A;
        cout << "O JOGO DUROU "<< RESULT <<" HORA(S)" << endl;
    }
    
    return 0;
}