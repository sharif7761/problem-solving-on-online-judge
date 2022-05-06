#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    double M[12][12];
    char p;
    double sum = 0.0;
    
    cin >> p;
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
            if((i > j) && (i+j < 11)){
                sum += M[i][j]; 
            }
        }
    }
    
    if(p == 'S')
         printf("%.1f\n", sum);
    else
         printf("%.1f\n", sum/30.0);
    return 0;
}