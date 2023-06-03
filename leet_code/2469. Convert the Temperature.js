// https://leetcode.com/problems/convert-the-temperature/

var convertTemperature = function(celsius) {
    let ans = []
    ans.push((celsius + 273.15).toFixed(5))
    ans.push((celsius * 1.80 + 32.00).toFixed(5))
    return ans

    //or
    // return [celsius + 273.15, celsius * 1.80 + 32.00];
};