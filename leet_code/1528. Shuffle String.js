//  https://leetcode.com/problems/shuffle-string

    var restoreString = function(s, indices) {
    let result = new Array(s.length).fill(null);
    for(let i = 0; i < s.length; i++){
        result.splice(indices[i], 1, s[i])
    }
    return result.join('');
};

// other solution

    // let shuffled=[];
    // for(let i=0;i<s.length;i++){
    //     shuffled[indices[i]] = s[i];
    // }

    // return shuffled.join('')