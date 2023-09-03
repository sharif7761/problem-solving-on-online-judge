// https://leetcode.com/problems/max-pair-sum-in-an-array/

var maxSum = function(nums) {
    max = -1;
    for(let i =0; i< nums.length-1; i++){
        const maxdigitOfI = Math.max(...nums[i].toString())
        for(let j = i+1; j< nums.length; j++){
            const maxdigitOfJ = Math.max(...nums[j].toString())
            if(maxdigitOfI == maxdigitOfJ){
                if(max < (nums[i]+nums[j])) {
                    max = nums[i]+nums[j]
                }
            }
            
        }
    }
    return max;
};
