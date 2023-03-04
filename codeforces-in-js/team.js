var line = readline().split(' ');
var noOfInputs = line[0];
var count = 0;
for (var i = 0; i < noOfInputs; i++) {
    var line2 = readline().split(' ');
    var str1 = line2[0];
    var str2 = line2[1];
    var str3 = line2[2];
    if((parseInt(str1)+parseInt(str2)+parseInt(str3)) >= 2){
        count++;
    } 
}
print(count)