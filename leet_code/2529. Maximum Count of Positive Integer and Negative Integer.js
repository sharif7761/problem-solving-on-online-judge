// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/

var maximumCount = function(nums) {
    var nev = 0
    var pos = 0
    for (let n of nums) {
        if (n < 0) nev++
        if (n > 0) pos++
    }
    return Math.max(nev, pos)
};