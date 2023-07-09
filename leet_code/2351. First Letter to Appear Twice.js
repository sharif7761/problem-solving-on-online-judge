// https://leetcode.com/problems/first-letter-to-appear-twice/

var repeatedCharacter = function(s) {
    const result = {};

    for (let ch of s) {
        if (result[ch]) return ch;
        result[ch] = 1;
    }

    return null;
};

