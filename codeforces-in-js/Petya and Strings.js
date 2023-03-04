var input1 = readline().split(' ');
var str1 = input1[0].toLowerCase();
var input2 = readline().split(' ');
var str2 = input2[0].toLowerCase();
var output = 0;

for(var i = 0; i < str2.length; i++){
    if(str1[i] > str2[i]){
        output = 1;
        break;
    }
    else if(str1[i] < str2[i]){
        output = -1;
        break;
    }
}
print(output)