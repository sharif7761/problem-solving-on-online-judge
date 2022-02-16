#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    float first, second, third, fourth, sum, last;
    cin >> first >> second >> third >> fourth;
    sum = (first * 2 + second * 3 + third * 4 + fourth) / 10;
   
    cout <<fixed << setprecision(1) <<"Media: "<< sum <<endl;
    if (sum >= 7.0){
        cout<<"Aluno aprovado." << endl;
    }
    else if (sum >= 5.0)
    {
        cout<<"Aluno em exame." << endl;
        cin>>last;
       
        cout<<setprecision(1)<<"Nota do exame: "<<last<<endl;
        if (last + sum / 2.0 > 5.0){
            cout<<"Aluno aprovado."<< endl;
        }
        else{
            cout<<"Aluno reprovado."<< endl;
        }
        
        cout<<setprecision(1)<<"Media final: "<<(last + sum ) / 2.0<<endl;
    }
    else{
        cout<<"Aluno reprovado."<< endl;
    }
    
    return 0;
}