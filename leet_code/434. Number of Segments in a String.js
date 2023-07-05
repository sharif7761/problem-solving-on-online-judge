// https://leetcode.com/problems/number-of-segments-in-a-string/

var countSegments = function(s) {
    return s.split(" ").filter(s => s).length
};