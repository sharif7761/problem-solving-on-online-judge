// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/

var finalPrices = function(prices) {
    const len = prices.length
    const output = [];
    for (let i = 0 ; i < len; i++) {
        let newValue = prices[i];
        for (let j = i + 1 ; j < len; j++) {
            if (prices[i] >= prices[j]) {
                newValue = prices[i] - prices[j];
                break;
            }
        }
        output.push(newValue);
    }
    
    return output;
};