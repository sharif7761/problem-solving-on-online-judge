#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float num, sum = 0;
    int count = 0;
    
    while(true){
        cin >> num;
        if(num < 0 || num > 10){
            cout << "nota invalida" << endl;
        } else {
            sum += num;
            count ++;
        }
        if(count == 2){
            cout << fixed << setprecision(2) << "media = " << sum / 2 << endl;
            break;
        }
    }
    return 0;
}