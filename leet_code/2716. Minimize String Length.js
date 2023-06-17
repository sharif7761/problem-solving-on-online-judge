// https://leetcode.com/problems/minimize-string-length/

var minimizedStringLength = function(s) {
    const stringSet = new Set(s.split(''))
    return stringSet.size

    // or
    // return new Set([...s]).size
};