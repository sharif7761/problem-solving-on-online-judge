/* Take a arrayy of length 5. print the sum of array excluding the smallest and largest value in the array.
    For example if the array is 1, 2, 3, 5, 4. output = 2+3+4 = 9 (excluding 1 and 5).
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   int arr[5] = {1, 5, 4, 3, 4}, sum = 0;
   int min=arr[0], max=arr[0];
   for(int i = 0; i < 5; i++){
       if(arr[i] < min) min = arr[i];
      
       if(arr[i] > max) max = arr[i];
       sum += arr[i];
   }
   sum = sum - min - max;
   cout << sum;
   
    return 0;
}