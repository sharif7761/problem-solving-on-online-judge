// https://leetcode.com/problems/to-be-or-not-to-be/

var expect = function(val) {
    const toBe = (checkEqual) =>  val === checkEqual ? true :  error("Not Equal");
    const notToBe =(checkNotEqual) =>  val !== checkNotEqual ? true : error("Equal");
	
    return {toBe, notToBe};
};

const error = (err) => {
    throw new Error(err)
}