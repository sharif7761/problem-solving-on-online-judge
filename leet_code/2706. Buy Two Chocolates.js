// https://leetcode.com/problems/buy-two-chocolates/

var buyChoco = function(prices, money) {
    prices = prices.sort((a, b) => a -b)
    if(prices[0] + prices[1] <= money) {
        money -= (prices[0] + prices[1])
    }
    return money;
};