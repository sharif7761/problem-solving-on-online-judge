#include <iostream>

using namespace std;

int main()
{
    int limak, brother, count = 0;
    cin >> limak >> brother;
    while(limak <= brother){
        limak *= 3;
        brother *= 2;
        count++;
    }
    
    cout<<count;

    return 0;
}