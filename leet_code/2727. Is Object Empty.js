// https://leetcode.com/problems/is-object-empty/

var isEmpty = function(obj) {
    return !Object.keys(obj).length;
};