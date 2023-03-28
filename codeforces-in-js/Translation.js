var input1 = readline().split(' ');
var lang1 = input1[0];
var input2 = readline().split(' ');
var lang2 = input2[0];
if(lang1.split("").reverse().join("") === lang2){
    print('YES');
} else {
    print('NO');
}