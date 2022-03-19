#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int age, sum = 0, count = 0;
    float avg;
    while(true){
        cin >> age;
        if(age < 0){
            break;
        } else {
            sum += age;
            count++;
        }
    }
    avg = (float)(sum) / (float)(count);
    cout << fixed << setprecision(2) << avg << endl;
    return 0;
}