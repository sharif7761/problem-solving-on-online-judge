#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    string a = "hello";
    int x = 0, count = 0;

    cin >> s;

	for(int i = 0; i < s.size(); i++){
	    if(s[i] == a[x]){
	       x++;
	       count++;
	    }
	}
	
    if (count == 5) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}