// https://leetcode.com/problems/sort-array-by-parity/

var sortArrayByParity = function(nums) {
    var arr1 = [];
    var arr2 = [];
    for(let i = 0; i < nums.length; i++){
        if(nums[i] % 2 == 0){
        arr1.push(nums[i])
        } else {
        arr2.push(nums[i])
        }
    }
    return arr1.concat(arr2);
};