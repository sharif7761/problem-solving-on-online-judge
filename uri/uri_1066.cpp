#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    int num, evenCount = 0, oddCount = 0, posCount = 0, negCount = 0;
    for(int i = 0; i < 5; i++){
        cin >> num;
        if(num % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
        
        if(num > 0) {
            posCount++;
        } 
        if(num < 0) {
            negCount++;
        }
        
    }
    
    cout<<evenCount<<" valor(es) par(es)"<<endl;
    cout<<oddCount<<" valor(es) impar(es)"<<endl;
    cout<<posCount<<" valor(es) positivo(s)"<<endl;
    cout<<negCount<<" valor(es) negativo(s)"<<endl;
    return 0;
}