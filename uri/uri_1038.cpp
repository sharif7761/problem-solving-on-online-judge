#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int X, Y;
    float total, price;
    cin >> X >> Y;
    
    if(X == 1) {
        price = 4.00;
    }
    else if(X == 2) {
        price = 4.50;
    }
    else if(X == 3) {
        price = 5.00;
    }
    else if(X == 4) {
        price = 2.00;
    }
    else if(X == 5) {
        price = 1.50;
    }
    total = price * Y;
    cout << fixed << setprecision(2) << "Total: R$ "<< total << endl;
    
    return 0;
}