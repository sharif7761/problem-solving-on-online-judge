/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int fuelType, alcohol = 0, gasoline =0, diesel = 0;
   while(true){
       cin >> fuelType;
       if(fuelType == 1){
           alcohol++;
       }
       else if(fuelType == 2){
           gasoline++;
       }
       else if(fuelType == 3){
           diesel++;
       }
       else if(fuelType == 4){
           break;
       }
   }
    cout<<"MUITO OBRIGADO" << endl;
    cout<<"Alcool: " << alcohol << endl;
    cout<<"Gasolina: " << gasoline << endl;
    cout<<"Diesel: " << diesel << endl;

    return 0;
}
