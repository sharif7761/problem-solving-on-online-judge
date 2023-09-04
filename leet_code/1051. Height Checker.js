// https://leetcode.com/problems/height-checker/

var heightChecker = function(heights) {
    let count = 0;
    const sortedHeights = [...heights];
    sortedHeights.sort((a, b) => a - b);
    for (let i = 0; i < heights.length; i++) {
        if (sortedHeights[i] !== heights[i]) {
        count++;
        }
    }
    return count;
};

