var line = readline().split(' ');
var noOfInputs = line[0];
var passingMark = line[1];
var count = 0;
var line2 = readline().split(' ');
for(var i = 0; i < noOfInputs; i++){
    var str1 = line2[i];
    if(parseInt(str1) > 0 && parseInt(str1) > parseInt(line2[passingMark - 1])){
        count++;
    }
}
print(count)