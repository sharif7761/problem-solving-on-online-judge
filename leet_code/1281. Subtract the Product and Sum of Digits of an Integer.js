// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

var subtractProductAndSum = function(n) {
    let sum = 0;
    let multiply = 1;
    n = n.toString()
    for(let i = 0; i < n.length; i++) {
        sum += Number(n[i])
        multiply *= Number(n[i])
    }
    return multiply - sum
};