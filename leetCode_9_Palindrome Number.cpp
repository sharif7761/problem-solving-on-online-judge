class Solution {
public:
    bool isPalindrome(int x) {
        if(x <0 && x >= 2147483647){
        return false;
    }
    
    long int rev = 0;
    int y = x;
    while(x > 0){
        rev = rev * 10;
        rev = rev + (x % 10);
        x = x / 10;
    }
    if(rev == y){
        return true;
    }
    return false;
    }
};