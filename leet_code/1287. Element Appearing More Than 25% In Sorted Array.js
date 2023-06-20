// https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/

var findSpecialInteger = function(arr) {
    let obj = {}
    for(var i = 0; i < arr.length; i++) {
        if(obj[arr[i]]) {
            obj[arr[i]] += 1
        } else {
            obj[arr[i]] = 1
        }
        if(obj[arr[i]] > arr.length / 4) return arr[i]
    }
    return 
};

// or

// let counter = 1;
// for (let i = 1; i < arr.length; i++) {
//     if (arr[i] !== arr[i - 1]) {
//         counter = 1;
//     } else {
//         counter++;
//     }
//     if (counter > arr.length / 4) {
//         return arr[i];
//     }
// }
// return arr[0];