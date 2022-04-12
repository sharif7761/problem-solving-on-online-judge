/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int inputNo, evenCount=0, oddCount=0, arrayIndex;
    
    int par[5];
    int impar[5];
    
    
    for(int j = 0; j < 15; j++){
            cin >> inputNo;
            if(inputNo%2 == 0){
                    par[evenCount] = inputNo;
                    evenCount++;
            }else{
                  impar[oddCount] = inputNo;
                  oddCount++;
            }
            
            if(evenCount == 5){
                 arrayIndex = 0;
                 while(arrayIndex != 5){ cout << "par[" << arrayIndex << "] = " << par[arrayIndex] << "\n"; arrayIndex++;}
                 evenCount = 0;
            }
            if(oddCount == 5){
                 arrayIndex = 0;
                 while(arrayIndex != 5){ cout << "impar[" << arrayIndex << "] = " << impar[arrayIndex] << "\n"; arrayIndex++;}
                 oddCount = 0;
            }
            if(j == 14){
                 arrayIndex = 0;
                 while(arrayIndex < oddCount){ cout << "impar[" << arrayIndex << "] = " << impar[arrayIndex] << "\n"; arrayIndex++;}
                 arrayIndex = 0;
                 while(arrayIndex < evenCount){ cout << "par[" << arrayIndex << "] = " << par[arrayIndex] << "\n"; arrayIndex++;}
            }
    }
    return 0;
}