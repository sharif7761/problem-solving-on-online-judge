#include <iostream>
#include<stdio.h>
using namespace std;

int main() {

   double inputNoOne, inputNoTwo;
   int count=1;
   
   while(count==1)
   {
       while(1)
       {
           cin>>inputNoOne;
           if(inputNoOne>=0 && inputNoOne<=10)
           break;
           cout<<"nota invalida\n";
       }
       while(1)
       {
           cin>>inputNoTwo;
           if(inputNoTwo>=0 && inputNoTwo<=10)
           break;
           cout<<"nota invalida\n";
       }
       inputNoOne = inputNoOne + inputNoTwo;
       inputNoOne = inputNoOne/2.00;
       printf("media = %.2lf\n",inputNoOne);
        while(1)
       {
           cin>>count;
           if(count>=1 && count<=2)
           break;
            cout<<"novo calculo (1-sim 2-nao)\n";
       }
       cout<<"novo calculo (1-sim 2-nao)\n";
   }

    return 0;
}