https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

var mostWordsFound = function(sentences) {
    var maxCount = 0;
    sentences.forEach(sentence => {
     var count = sentence.split(' ').length
        if(count > maxCount){
            maxCount = count;
        }
    });
    return maxCount;
};

// or
//return Math.max(...sentences.map(x => x.split(' ').length));