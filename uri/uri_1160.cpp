#include <iostream>

using namespace std;

int main()
{
    int inputNo, year, villA, villB;
    double villARate, villBRate;
    cin>> inputNo;
    for(int i=0; i<inputNo; i++)
    {
        year = 0;
        cin >> villA >> villB >> villARate >> villBRate;
        while(villA <= villB)
        {
            villA += ((villA*villARate) / 100.0);
            villB += ((villB*villBRate) / 100.0);
            
            year++;
            if (year > 100)
            {
                cout <<"Mais de 1 seculo."<< endl;
                break;
            }
        }
        if (year <= 100) {
            cout << year <<" anos."<< endl;
        }
    }
    return 0;
}