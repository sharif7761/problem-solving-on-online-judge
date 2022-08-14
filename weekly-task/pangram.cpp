// Input a string and find out is it a pangram or not and return a object with count of each occurance of a letter

#include <iostream>
using namespace std;
int main() {
   char str[100] = "the quick brown fox jumps over the lazy dog"; // 4 * 100
   
   int i = 0, alphabet[26] = {0}, j, isPangram = 0; // 4 + 4 * 26 + 4 + 4 
   
   while (str[i] != '\0') { // 4 * n 
      if (str[i] >= 'a' && str[i] <= 'z') {
         j = str[i] - 'a';
         alphabet[j]++;
      }
      i++;
   }
   cout<<"Frequency of all alphabets in the string is:"<<endl;
   for (i = 0; i < 26; i++){    // 4 * 26
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

// time => O(n) + O(n) = O(n) 
//space => O(1) + O(4n) + O(4n) = O(n)