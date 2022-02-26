#include <iostream>
#include <string>
using namespace std;

int main()
{
    int testCase, x = 0;
    string s;
    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> s;
        if(s[1] == '+'){
            x++;
        } else {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}