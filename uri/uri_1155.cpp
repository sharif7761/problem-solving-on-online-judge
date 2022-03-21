#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float sum = 0.00;
    for(float i = 1; i <= 100; i++){
        sum += 1 / i;
    }
    
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}
