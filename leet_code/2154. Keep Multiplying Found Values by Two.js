// https://leetcode.com/problems/keep-multiplying-found-values-by-two/

var findFinalValue = function(nums, original) {
    while(true){
        if(nums.includes(original)){
            original *= 2;
        }
        else{
            return original;
        }
    }
};