#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1;
    for(int i = 0; i < s1.length(); i++){
        if(towlower(s1[i]) == 'a' || towlower(s1[i]) == 'e' || towlower(s1[i]) == 'i' || towlower(s1[i]) == 'o' || towlower(s1[i]) == 'u' || towlower(s1[i]) == 'y'){
            continue;            
        }
        else {
            s2 += '.';
            s2 += towlower(s1[i]);
        }
    }
    cout << s2 << endl;

    return 0;
}
