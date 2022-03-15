#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b=0;
    string s;
    cin >> a >> s;
    for(int i = 0; i < a; i++){
        if(s[i] == s[i+1]){
            b++;
        }
    }
    cout<< b;

    return 0;
}
