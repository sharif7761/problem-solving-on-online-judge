// https://leetcode.com/problems/find-the-duplicate-number/

var findDuplicate = function(nums) {
    let uniqueSet = new Set();
    for (const num of nums) {
        if(uniqueSet.has(num)){
            return num;
        } else {
            uniqueSet.add(num)
        }
    }
};