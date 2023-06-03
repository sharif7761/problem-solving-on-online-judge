// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/


var finalValueAfterOperations = function(operations) {
    let len = operations.length
    let x = 0;
    for(let i = 0; i < len; i++){
        if(operations[i] ==='X++' || operations[i] ==='++X'){
            x++;
        }
        else{
            x--;
        }
    }
    return x;
};