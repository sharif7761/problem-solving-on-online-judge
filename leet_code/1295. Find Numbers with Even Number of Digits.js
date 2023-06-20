// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

var findNumbers = function(nums) {
    let count = 0;
    for(let num of nums) {
        if(Number(num.toString().length) %2===0) count++
    }
    return count;
};