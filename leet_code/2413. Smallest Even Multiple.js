// https://leetcode.com/problems/smallest-even-multiple/

var smallestEvenMultiple = function(n) {
    if(n % 2 !== 0){
        n = n * 2;
    }
    return n;

    // or
    // var i = 2;
    // while(true){
    //     if((i % n === 0) && (i % 2 === 0)){
    //         return i;
    //     }
    //     i++;
    // }
};