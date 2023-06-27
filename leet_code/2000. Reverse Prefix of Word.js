// https://leetcode.com/problems/reverse-prefix-of-word/

var reversePrefix = function(word, ch) {
    let indexOFCh = word.split('').indexOf(ch)
    return word.slice(0, indexOFCh+1).split("").reverse().join('')+word.slice(indexOFCh+1, word.length)
};