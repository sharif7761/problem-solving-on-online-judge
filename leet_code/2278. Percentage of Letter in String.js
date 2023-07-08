// https://leetcode.com/problems/percentage-of-letter-in-string/

var percentageLetter = function(s, letter) {
    count = 0;
    for (let ch of s) {
        if(ch === letter) count++
    }

    return Math.floor((count / s.length) * 100)
};