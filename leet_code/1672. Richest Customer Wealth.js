// https://leetcode.com/problems/richest-customer-wealth/

var maximumWealth = function(accounts) {
    let max = 0;
    const test = accounts.map((account) => {
        return account.reduce((money, acc) => {
            return money + acc
        })
    })
    return Math.max(...test)
};