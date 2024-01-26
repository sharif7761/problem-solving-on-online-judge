// https://leetcode.com/problems/smallest-even-multiple/

var smallestEvenMultiple = function(n) {
    if(n % 2 !== 0){
        n = n * 2;
    }
    return n;
};