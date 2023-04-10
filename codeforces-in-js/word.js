// https://codeforces.com/problemset/problem/59/A

var line = readline().split(' ');
var input = line[0];
var countUpper = 0;
var countLower = 0;
for (var i = 0; i < input.length; i++) {
    if(input[i].toUpperCase() === input[i]){
        countUpper++;
    } else {
        countLower++;
    }
}
if(countUpper > countLower){
   print(input.toUpperCase());
} else {
    print(input.toLowerCase());
}