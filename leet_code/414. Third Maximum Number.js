// https://leetcode.com/problems/third-maximum-number/

var thirdMax = function(nums) {
    nums = new Set(nums)
    const sortedArr = Array.from(nums).sort((a, b) => b - a)
    if(sortedArr.length < 3) {
        return sortedArr[0]
    } else {
        return sortedArr[2]
    }
};