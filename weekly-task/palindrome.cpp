#include <iostream>
using namespace std;

int checkLength(string givenString){
    int length = 0;
    for(int i=0; givenString[i]!='\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    // string inputString;
    // cin >> inputString;
    
    char inputString[256];
    cin.getline (inputString,256);
    
    // int inputLeng = inputString.length();
    int inputLeng = checkLength(inputString);
    
    for(int i=0; i < inputLeng / 2; i++, inputLeng--){
        if(inputString[i] != inputString[inputLeng-1]){
            cout << "Not palindrome";
            return 0;
        }
    }
        cout << "Palindrome";
            
    return 0;
}