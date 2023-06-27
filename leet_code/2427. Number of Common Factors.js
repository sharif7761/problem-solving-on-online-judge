// https://leetcode.com/problems/number-of-common-factors/

var commonFactors = function(a, b) {
    len = a <= b ? a : b;
    //or
    //  const len = Math.min(a,b)
    count = 1;
    for(let i = 2; i <= len; i++){
        if(a % i === 0){
            if(b % i === 0){
                count++;
            }
        }
    }
    return count
};
