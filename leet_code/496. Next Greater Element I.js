// https://leetcode.com/problems/next-greater-element-i/

var nextGreaterElement = function(nums1, nums2) {
     result = []
     for(let num1 of nums1){
     let maxVal = num1
        for(let i = nums2.indexOf(num1)+1; i < nums2.length; i++){
            if(num1 < nums2[i]){
                maxVal = nums2[i];
                break;
            }
        }
        if(maxVal == num1) result.push(-1)
        else result.push(maxVal)
    }
    return result
};