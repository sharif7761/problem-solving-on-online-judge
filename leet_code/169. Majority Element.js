// https://leetcode.com/problems/majority-element/

var majorityElement = function(nums) {
    let obj = {}
    let max=0;
    let result;
    for(var i = 0; i < nums.length; i++) {
        if(!obj[nums[i]]) {
            obj[nums[i]] = 1
        } else {
            obj[nums[i]] += 1
        }
    }
    for(let item in obj) {
        if(obj[item] > max) {
            max = obj[item]
            result = item
        }
    }
    return result
};