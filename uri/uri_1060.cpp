#include <iostream>
 
using namespace std;
 
int main() {
    float A, B, C, D, E, F;
    int Count = 0;
    cin >> A >> B >> C >> D >> E >> F;
    if(A > 0){
        Count++;
    }
    if(B > 0){
        Count++;
    }
    if(C > 0){
        Count++;
    }
    if(D > 0){
        Count++;
    }
    if(E > 0){
        Count++;
    }
    if(F > 0){
        Count++;
    }
    cout << Count << " valores positivos" << endl;
    
    return 0;
}