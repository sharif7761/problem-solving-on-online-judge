// https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/

var checkString = function(s) {
    if(!s.includes('b')) return true;
    let bIndex = s.indexOf('b');

    for(let i = bIndex + 1; i < s.length; i++) {
        if(s[i] === 'a') return false; 
    }
    return true;

    // or

    // let flag = 0;
    // for(let ch of s){
    //     console.log(ch)
    //     if(ch === 'b'){
    //         flag = 1;
    //     }
    //     else if(flag === 1 && ch === 'a'){
    //         return false;
    //     }
    // }
    // return true;
};