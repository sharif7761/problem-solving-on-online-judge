// https://leetcode.com/problems/destination-city/

var destCity = function(paths) {
    let originPaths = new Set()
    for(let path of paths){
        console.log(path[0])
        originPaths.add(path[0])
    }
    for(let path of paths){
        if(!originPaths.has(path[1])){
            return path[1]
        }
    }
};