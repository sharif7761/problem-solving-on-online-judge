#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    float num,sum=0;
    int i,count=0;
    for(i=1;i<=6;i++){
        cin >> num;
        if(num>0){
          sum = sum + num;
          count++;
        }
    }
    
    float average = sum/count;
    cout<<count<<" valores positivos"<<endl;
    cout<< fixed << setprecision(1) << average <<endl;
    return 0;
}