#include <iostream>

using namespace std;

int linear_search(int A[], int arrSize, int searchValue){
    int i;
    for(i = 0; i < arrSize; i++){
        if(A[i] == searchValue){
            return i;
        }
    }
    return i = -1;
}

int main()
{
    int arr[5] = {10, 20, 50, 40, 25};
    int result = linear_search(arr, 5, 140);
    cout << result;
    return 0;
}
