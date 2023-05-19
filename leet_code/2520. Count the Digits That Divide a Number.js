// https://leetcode.com/problems/count-the-digits-that-divide-a-number/

var countDigits = function(num) {
    let tempNum = num.toString();
    let count = 0;
    for(let i = 0; i < tempNum.length; i++){
        if(num % tempNum[i] === 0){
            count++;
        }   
    }
    return count;
};