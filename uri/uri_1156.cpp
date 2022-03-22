#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float sum = 1, dividend = 2;
    for(float i = 3; i <= 39; i += 2){
        sum += i / dividend;
        dividend *= 2;
    }
    
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}
