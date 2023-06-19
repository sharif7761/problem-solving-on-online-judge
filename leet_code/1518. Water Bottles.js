// https://leetcode.com/problems/water-bottles/

var numWaterBottles = function(numBottles, numExchange) {
    let count = numBottles;
    if(numBottles < numExchange) return count;
    while(numBottles >= numExchange){
        fullRemainingBottle = numBottles % numExchange
        numBottles = Math.floor(numBottles / numExchange)
        count += numBottles;
        numBottles += fullRemainingBottle
    }
    return count;
};