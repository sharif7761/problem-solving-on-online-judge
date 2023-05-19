// https://leetcode.com/problems/count-items-matching-a-rule

var countMatches = function(items, ruleKey, ruleValue) {
    let count = 0;
    for(let i = 0; i < items.length; i++){
        if((ruleKey === 'type' && items[i][0] === ruleValue) || (ruleKey === 'color' && items[i][1] === ruleValue) ||           (ruleKey === 'name' && items[i][2] === ruleValue)){
            count++;
        }
    }
    return count;
};