// https://leetcode.com/problems/counter-ii

var createCounter = function(init) {
    let newInit = init;

    const increment = () => {
        return ++newInit
    }

    const decrement = () => {
        return --newInit
    }

    const reset =  () => {
        return newInit = init
    }

    return {increment, decrement, reset}
};