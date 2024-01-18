// https://leetcode.com/problems/number-of-employees-who-met-the-target/

var numberOfEmployeesWhoMetTarget = function(hours, target) {
    let arr = hours.filter((hour) => hour >= target)
    return arr.length;
};