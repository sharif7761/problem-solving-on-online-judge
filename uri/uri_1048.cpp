#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    float salary, new_salary, earned, percent;
    cin >> salary;
    if(salary >= 0 && salary <= 400){
        percent = 15;
    }
    else if(salary > 400 && salary <= 800){
        percent = 12;
    }
    else if(salary > 800 && salary <= 1200){
        percent = 10;
    }
    else if(salary > 1200 && salary <= 2000){
        percent = 7;
    }
    else{
        percent = 4;
    }
    
    earned = (percent / 100) * salary;
    new_salary = salary + earned;
    cout << fixed << setprecision(2) << "Novo salario: " << new_salary << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << earned << endl;
    cout << fixed << setprecision(0) <<  "Em percentual: " << percent << " %" << endl;
    
    return 0;
}