#include <iostream>

using namespace std;

int main()
{
    int xAxis, yAxis;
    while(true){
        cin >> xAxis >> yAxis;   
        if(xAxis == 0 || yAxis == 0){
            break;
        }
        
        if(xAxis > 0 && yAxis > 0){ 
            cout << "primeiro" <<endl;
        }
        else if(xAxis > 0 && yAxis < 0){
            cout << "quarto" <<endl;
        }
        else if(xAxis < 0 && yAxis > 0){
            cout << "segundo" <<endl;
        }
        else if(xAxis < 0 && yAxis < 0){
            cout << "terceiro" <<endl;
        }
    }
    return 0;
}