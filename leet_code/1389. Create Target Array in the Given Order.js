https://leetcode.com/problems/create-target-array-in-the-given-order/

var createTargetArray = function(nums, index) {
    var result = []
    for(var i = 0; i < nums.length; i++){
        result.splice(index[i], 0, nums[i]);
    }
    return result;
};