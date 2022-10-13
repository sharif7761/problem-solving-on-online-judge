// problem link: https://www.geeksforgeeks.org/find-pairs-b-array-b-k/?ref=lbp

function arrayPairs(arr, n, k)
{
    let routes = []
    for (var i = 0; i < n; i++) {
        for (var j = 0; j < n; j++) {
            if(arr[i] % arr[j] == k){
                routes.push(arr[i] + ", " + arr[j]);
                console.log(arr[i] + " % " + arr[j] + " = " + k)
            }
        }
    }
    console.log(routes)
}
 
var arr = [ 2, 3, 5, 4, 7 ];
var n = arr.length;
var k = 3
arrayPairs(arr, n, k);
