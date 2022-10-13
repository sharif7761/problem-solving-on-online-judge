function routePairs(arr, n)
{
    let routes = []
    for (var i = 0; i < n -1; i++) {
        for (var j = i+1; j < n; j++) {
            routes.push(arr[i] + " - " + arr[j]);
        }
    }
    console.log(routes)
}
 
var arr = [ 'Dhaka', 'CTG', 'COXS', 'Bandarban' ];
var n = arr.length;
routePairs(arr, n);