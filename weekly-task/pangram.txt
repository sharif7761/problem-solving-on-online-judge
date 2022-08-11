// Input a string and find out is it a pangram or not and return a object with count of each occurance of a letter

#include <iostream>
using namespace std;
int main() {
   char str[100] = "The quick brown fox jumps over the lazy dog";
   
   int i = 0, alphabet[26] = {0}, j, isPangram = 0;
   
   while (str[i] != '\0') {
      if (str[i] >= 'a' && str[i] <= 'z') {
         j = str[i] - 'a';
         ++alphabet[j];
      }
      ++i;
   }
   cout<<"Frequency of all alphabets in the string is:"<<endl;
   for (i = 0; i < 26; i++){
       cout<< char(i + 'a')<<" : "<< alphabet[i]<< endl;
       if(alphabet[i] == 0){
           isPangram++;
       }
   }
   if(isPangram == 0){
       cout<<"Pangram"<<endl;
   } else {
       cout<<"Not Pangram"<<endl;
   }
   
   return 0;
}