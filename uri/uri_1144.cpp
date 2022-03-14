#include <iostream>

using namespace std;

int main()
{
   int noOfLines;
   cin >> noOfLines;
   for(int i = 1; i <= noOfLines; i++){
       cout << i << " " << i * i << " " << i * i * i << endl;
       cout << i << " " << i * i + 1 << " " << i * i * i + 1 << endl;
   }

    return 0;
}
