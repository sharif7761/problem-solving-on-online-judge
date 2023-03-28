var line = readline().split(' ');
var input = line[0];
var distictLeng = input.length;
var sortedInput = input.split('').sort().join('')
for(var i = 0; i < input.length -1; i++){
    if(sortedInput[i] == sortedInput[i+1]){
        distictLeng--;
    }
}
if(distictLeng % 2 === 0){
   print('CHAT WITH HER!')
} else {
    print('IGNORE HIM!')
}