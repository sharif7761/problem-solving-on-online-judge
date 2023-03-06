//problem link: https://codeforces.com/problemset/problem/282/A

var line = readline().split(' ');
var noOfInputs = line[0];
var count = 0;
for (var i = 0; i < noOfInputs; i++) {
    var line2 = readline().split(' ');
    var str1 = line2[0];
    if(str1[1] == '+'){
        count++;
    } else {
        count--;
    }
}
print(count);