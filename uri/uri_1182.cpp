#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   double arr[12][12], sum = 0;
   int columnNo;
   char operation;
   cin >> columnNo >> operation;
   for(int i = 0; i < 12; i++){
       for(int j = 0; j < 12; j++){
           cin >> arr[i][j];
       }
   }
   
   for(int k = 0; k < 12; k++){
       sum += arr[k][columnNo];
   }
   if(operation == 'M'){
        sum /= 12;       
    }
    cout << fixed << setprecision(1) << sum <<endl;

    return 0;
}