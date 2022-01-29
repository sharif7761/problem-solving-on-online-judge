#include <iostream>

using namespace std;

int linear_search(int A[], int arrSize, int searchValue){
    int mid, i;
    int left = 0;
    int right = arrSize - 1;
    
    while(left <= right){
        mid = (left + right) / 2;
        if(A[mid] == searchValue){
            return mid;
        }
    
        if(A[mid] < searchValue) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main()
{
    int arr[6] = {10, 20, 50, 60, 75, 80};
    int result = linear_search(arr, 6, 75);
    cout << result;
    return 0;
}
