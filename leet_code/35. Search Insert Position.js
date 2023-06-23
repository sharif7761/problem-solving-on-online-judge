// https://leetcode.com/problems/search-insert-position/

var searchInsert = function(nums, target) {
    if(nums.includes(target)){
    return nums.indexOf(target)
}
    const len = nums.length;
    if(nums[len - 1] < target){
            return len
    }
    else if(nums[0] > target){
        return 0;
    }

    for(let i = 0; i < len; i++){
        if((nums[i] < target && nums[i+1] > target)){
            return i+1
        }
    }
};

//
// // includes,indexOf,rest operator,arrow function,sorting via sort method
//      if(nums.includes(target))  //includes method
//       return nums.indexOf(target); //returns index method//
//      return [...nums, target].sort((a,b) => a-b).indexOf(target); //return where it shold be inserted//