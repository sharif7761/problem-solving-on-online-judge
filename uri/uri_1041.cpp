#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    float X, Y;
    string result;
    cin >> X >> Y;
    if(X > 0 && Y > 0){
        result= "Q1";
    }
    else if(X > 0 && Y < 0){
        result= "Q4";
    }
    else if(X < 0 && Y > 0){
        result= "Q2";
    }
    else if(X < 0 && Y < 0){
        result= "Q3";
    }
    else if(X == 0 && Y != 0 ) {
        result= "Eixo Y";
    }
    else if(X != 0 && Y == 0 ) {
        result= "Eixo X";
    } 
    else{
        result= "Origem";
    }
    cout << result << endl;
    
    return 0;
}