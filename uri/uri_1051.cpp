/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double sal;
    
    cin >> sal;
    
    if(sal <= 2000.00){
           cout << "Isento\n";
    }else if (sal >= 2000.01 && sal <= 3000.00){
          printf("R$ %.2f\n", (sal - 2000.00)*0.08);
    }else if (sal >= 3000.01 && sal <= 4500.00){
          printf("R$ %.2f\n", ((sal - 3000.00)*0.18 + 1000.00*0.08));
    }else if (sal >= 4500.01){
          printf("R$ %.2f\n", ((sal - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08));
    }
    return 0;
}