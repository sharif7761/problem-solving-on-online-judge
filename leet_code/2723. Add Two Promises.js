// https://leetcode.com/problems/add-two-promises/

var addTwoPromises = async function(promise1, promise2) {
   return Promise.all([promise1, promise2])
    .then(res => {
       const [a, b] = res
       return a+b
   })
};