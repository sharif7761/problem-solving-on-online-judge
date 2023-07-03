// https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/
 
function wordSum(word) {
        let baseCode = "a".charCodeAt(0);
        let sum = "";
        for (let i = 0; i < word.length; i++) {
            sum += word[i].charCodeAt(0) - baseCode;
        }
        return parseInt(sum);
    }

var isSumEqual = function(firstWord, secondWord, targetWord) {
    return wordSum(firstWord) + wordSum(secondWord) === wordSum(targetWord);
};


// or

firstNum = ''
secondNum = ''
targetNum = ''
for (let ch1 of firstWord) {
    firstNum += (ch1.charCodeAt() - 97)
}
for (let ch1 of secondWord) {
    secondNum += (ch1.charCodeAt() - 97)
}
for (let ch1 of targetWord) {
    targetNum += (ch1.charCodeAt() - 97)
}

console.log(Number(firstNum) + Number(secondNum) == Number(targetNum))
return Number(firstNum) + Number(secondNum) == Number(targetNum)
