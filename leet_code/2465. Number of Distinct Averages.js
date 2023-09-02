// https://leetcode.com/problems/number-of-distinct-averages/

var distinctAverages = function(nums) {
    let distinctSet = new Set()
    while(nums.length){
        max = Math.max(...nums)
        min = Math.min(...nums)
        average = (max + min) / 2
        distinctSet.add(average)
        nums.splice(nums.indexOf(max), 1)
        nums.splice(nums.indexOf(min), 1)
        
    }
    return distinctSet.size;
};



