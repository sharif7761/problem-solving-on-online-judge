// https://leetcode.com/problems/find-the-highest-altitude/

var largestAltitude = function(gain) {
    let countGain = 0;
    let maxGain = 0;
    for(let i = 0; i < gain.length; i++){
        countGain += gain[i]
        // or
        // Math.max(maxGain, countGain);
        maxGain = maxGain < countGain ? countGain : maxGain
    }
    return maxGain
        
};