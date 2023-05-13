// https://leetcode.com/problems/merge-strings-alternately/
var mergeAlternately = function(word1, word2) {
    let newWord = ''
    let len = Math.max(word1.length, word2.length)
    for(let i = 0; i < len; i++){
        if(word1[i]) newWord += word1[i]
        if(word2[i]) newWord += word2[i]
    }
    return newWord
};