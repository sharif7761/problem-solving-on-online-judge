#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int one = 0, zero = 0, result = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == '1'){
            one++;
            zero = 0;
        } else {
            zero++;
            one = 0;
        }
        if(one == 7 || zero == 7){
            result = 1;
        }
    }

    if(result == 1){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    } 
    return 0;
}