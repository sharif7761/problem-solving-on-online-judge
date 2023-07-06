// https://leetcode.com/problems/single-number/

var singleNumber = function(nums) {
    result = []
    for(let num of nums){
        if(!result.includes(num)){
            result.push(num)
        }
        else {
            result.splice(result.indexOf(num), 1)
        }
    }
    return result
};