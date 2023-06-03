// https://leetcode.com/problems/number-of-good-pairs/

var numIdenticalPairs = function(nums) {
    let len = nums.length
    let count = 0;
    for(let i = 0; i < len; i++){
        for(let j = i+1; j < len; j++){
            if(nums[i] === nums[j]){
                count++
            }
        }
    }
    return count;
};