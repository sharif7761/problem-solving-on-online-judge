// https://leetcode.com/problems/sum-of-squares-of-special-elements

var sumOfSquares = function(nums) {
    const len = nums.length;
    let sum = 0
    for(let i = 0; i < len; i++){
        if(len % (i+1) === 0){
            sum += nums[i] ** 2
        }
    }
    return sum;
};