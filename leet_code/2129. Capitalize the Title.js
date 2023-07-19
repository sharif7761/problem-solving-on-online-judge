// https://leetcode.com/problems/capitalize-the-title/description/

var capitalizeTitle = function(title) {
    splitedTitle = title.split(' ')
    newTitle = []
    for (letter of  splitedTitle){
        firstLetter = letter.length > 2 ? letter[0].toUpperCase() : letter[0].toLowerCase()
        newTitle.push(firstLetter+letter.substr(1).toLowerCase())
    }   
    return newTitle.join(' ')
};