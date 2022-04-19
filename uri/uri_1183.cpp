#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   double arr[12][12], sum = 0;
   char operation;
   cin >> operation;
   for(int i = 0; i < 12; i++){
       for(int j = 0; j < 12; j++){
           cin >> arr[i][j];
       }
   }
   
   for(int k = 0; k < 12; k++){
       for(int l = (k + 1); l < 12; l++){
            sum += arr[k][l];
       }
       
   }
   if(operation == 'M'){
        sum /= 66.0;       
    }
    cout << fixed << setprecision(1) << sum <<endl;

    return 0;
}