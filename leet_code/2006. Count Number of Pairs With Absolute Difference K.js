//  https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/

var countKDifference = function(nums, k) {
    let count = 0;
    let len = nums.length;
    for(let i = 0; i < len - 1; i++){
        for(let j = i + 1; j < len; j++){
            if(Math.abs(nums[i] - nums[j]) === k){
                count++;
            }
        }
    }
    return count;
};