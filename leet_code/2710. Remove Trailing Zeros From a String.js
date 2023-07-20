// https://leetcode.com/problems/remove-trailing-zeros-from-a-string/

var removeTrailingZeros = function(num) {
    for(let i = num.length -1; i > 0; i--){
        if(num[i]==='0'){
            num = num.substring(0, i)
        }
        else {
            break;
        }
    }
    return num
};

// or 
// let i = -1; //index for zeros counting back from the end of num
//     while (num.at(i) === "0") i--;
     
//     return num.substring(0, num.length + i + 1);