// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/

var differenceOfSum = function(nums) {
    let sumOfNum = 0;
    let sumOfEle = 0;
    for(let i = 0; i < nums.length; i++){
        sumOfNum += nums[i];
        let tempNum = nums[i].toString()
        if(tempNum.length > 1){
            for(let j = 0; j < tempNum.length; j++){
            sumOfEle += Number(tempNum[j]);
            }
        } else {
            sumOfEle += Number(tempNum);
        }
    }

    return Math.abs(sumOfNum - sumOfEle)
};