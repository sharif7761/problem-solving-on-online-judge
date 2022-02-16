#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    float N1, N2, N3, N4, N5, Media, Final;
    cin >> N1 >> N2 >> N3 >> N4;
    Media = ((N1*2) + (N2*3) + (N3*4) + (N4*1)) / 10; 
    if(Media >= 7){
      cout << fixed << setprecision(1) <<"Media: "<< Media <<endl<<"Aluno aprovado."<< endl;    
    } else if(Media >= 5 && Media <= 6.9) {
        cout << fixed << setprecision(1) <<"Media: "<< Media <<endl<<"Aluno em exame."<< endl;
        cin >> N5;
        cout <<"Nota do exame: "<< N5 << endl;
        Final = (Media + N5)/2;
        if(Final >= 5){
            cout << fixed << setprecision(1) <<"Aluno aprovado."<< endl<<"Media final: "<< Final << endl;
        }else {
            cout << fixed << setprecision(1) <<"Aluno reprovado.."<< endl<<"Media final: "<< Final << endl;
        }
    } else {
      cout << fixed << setprecision(1) <<"Media: "<< Media <<endl<<"Aluno reprovado."<< endl;  
    }
    
    
    return 0;
}