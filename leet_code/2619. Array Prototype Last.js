// https://leetcode.com/problems/array-prototype-last/solutions/

Array.prototype.last = function() {
    let len = this.length-1;
    if(this.length) return this[len]
    return -1;
};