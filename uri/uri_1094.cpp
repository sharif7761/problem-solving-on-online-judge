#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int total_case, amount, total_amount = 0, c_amount = 0, r_amount = 0, s_amount = 0;
    float c_percent, r_percent, s_percent;
    char animal;
    cin >> total_case;
    for(int i = 0; i < total_case; i++){
        cin >> amount >> animal;
        if(animal == 'C'){
            c_amount += amount;
        } else if(animal == 'R'){
            r_amount += amount;
        } else if(animal == 'S'){
            s_amount += amount;
        }
        total_amount += amount;
    }
    
    c_percent = ((float)c_amount / (float)total_amount) * 100;
    r_percent = ((float)r_amount / (float)total_amount) * 100;
    s_percent = ((float)s_amount / (float)total_amount) * 100;
    
    cout << "Total: " << total_amount <<" cobaias" << endl;
    cout << "Total de coelhos: " << c_amount << endl;
    cout << "Total de ratos: " << r_amount << endl;
    cout << "Total de sapos: " << s_amount << endl;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << c_percent << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de ratos: " << r_percent << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de sapos: " << s_percent << " %" << endl;
    
    return 0;
}