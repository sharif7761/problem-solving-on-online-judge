// https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/

var divideString = function(s, k, fill) {
    const result = [];
    for (let i = 0; i < s.length; i += k) {
        let str = ''
        for(let j = i; j < k + i; j++){
            str += s[j] || fill
        }
        result.push(str);
    }
    return result
};