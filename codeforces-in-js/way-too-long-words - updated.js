var line = readline().split(' ');
var noOfInputs = line[0];
for (var i = 0; i < noOfInputs; i++) {
    var line2 = readline().split(' ');
    var str = line2[0];
    if(str.length > 10){
        print(str[0]+(str.length-2)+str[str.length-1])
    } else {
        print(str)
    }
}