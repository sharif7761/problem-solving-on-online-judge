var line = readline().split(' ');
var input = line[0];
var step = line[1];
while(step){
    step--;
    if(input % 10 === 0){
        input /= 10;
    } else {
        input--;
    }
}
print(input);