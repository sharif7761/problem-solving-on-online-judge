// https://leetcode.com/problems/concatenation-of-array/

var getConcatenation = function(nums) {
    return nums.concat(nums)
    
    //or
    // return nums.push(...nums);
    
    //or
    // return [...nums, ...nums];  
};