// https://leetcode.com/problems/maximum-69-number/

var maximum69Number  = function(num) {
    return num.toString().includes('6') ? parseInt(num.toString().replace('6','9')) : num;
};