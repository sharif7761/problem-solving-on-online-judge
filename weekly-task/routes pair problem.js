function routePairs(arr, n)
{
    for (var i = 0; i < n -1; i++) {
        for (var j = i+1; j < n; j++) {
            document.write(arr[i] + " - " + arr[j]);
        }
    }
}
 
var arr = [ 'Dhaka', 'CTG', 'COXS', 'Bandarban' ];
var n = arr.length;
routePairs(arr, n);