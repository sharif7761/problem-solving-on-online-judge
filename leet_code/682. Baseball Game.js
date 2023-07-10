// https://leetcode.com/problems/baseball-game/

var calPoints = function(operations) {
    result = []
    for(let i = 0; i < operations.length; i++){
        if(!isNaN(Number(operations[i]))){
            result.push(Number(operations[i]))
        } 
        else if(operations[i] === '+'){
            result.push( (result[result.length-1]) + (result[result.length-2]) )
        }
        else if(operations[i] === 'D'){
            result.push( (result[result.length-1]) * (2) )
        }
        else if(operations[i] === 'C'){
            result.pop()
        }
    }

    return result.reduce((a, b) => a + b, 0)
};