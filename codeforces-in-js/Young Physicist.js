var line = readline().split(' ');
var noOfInputs = line[0];
var countX = 0;
var countY = 0;
var countZ = 0;
for (var i = 0; i < noOfInputs; i++) {
    var inputAxis = readline().split(' ');
    var x = inputAxis[0];
    var y = inputAxis[1];
    var z = inputAxis[2];
    countX += Number(x);
    countY += Number(y);
    countZ += Number(z);
}
if(countX === 0 && countY  === 0 && countZ === 0){
    print('YES')
} else {
    print('NO')
}