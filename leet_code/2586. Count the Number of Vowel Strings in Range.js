// https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range/

var vowelStrings = function(words, left, right) {
    const vowels = ["a", "e", "i", "o", "u"]
    let count = 0;
    for(let i = left; i <= right; i++) {
        if(vowels.includes(words[i][0]) && vowels.includes(words[i][words[i].length-1])){
            count++
        }
    }
    return count;
};