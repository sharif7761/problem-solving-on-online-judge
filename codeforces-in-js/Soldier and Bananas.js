var line = readline().split(' ');
var price = line[0];
var dollar = line[1];
var amount = line[2];
var total = 0;

for(var i = 1; i <= amount; i++){
    total += price * i  
}
total = total - dollar;
if(total <= 0){
    print(0)
} else {
    print(total)
}