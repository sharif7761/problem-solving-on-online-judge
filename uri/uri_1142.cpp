#include <iostream>

using namespace std;

int main()
{
    int noOfline;
    cin >> noOfline;
    for(int i = 1; i <= noOfline*4; i += 4){
        cout << i << " " << i + 1 << " " << i + 2 << " PUM" << endl;
    }
    return 0;
}
