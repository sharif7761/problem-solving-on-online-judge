// https://leetcode.com/problems/alternating-digit-sum/

var alternateDigitSum = function(n) {
    str = n.toString()
    result = 0;
    for (let i = 0; i < str.length; i++) {
        if(i % 2 === 0){
            result += +str[i]
        } else {
            result -= +str[i]
        }
    }
    return result;
};