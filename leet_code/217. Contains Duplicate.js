// https://leetcode.com/problems/contains-duplicate/

var containsDuplicate = function(nums) {
    let obj = {}
for(let i = 0; i<nums.length; i++){
    console.log(obj[nums[i]])
    if(obj[nums[i]] === undefined){
        obj[nums[i]] = nums[i];
    }
    else {
        console.log(obj)
        console.log('1')
        return true
    }
}
return false;

// or 
// const seen = new Set();
//     for (var i = 0; i < nums.length; i++) {
//         if (seen.has(nums[i])) {
//             return true;
//         } else {
//             seen.add(nums[i])
//         }
//     }
//     return false;
};