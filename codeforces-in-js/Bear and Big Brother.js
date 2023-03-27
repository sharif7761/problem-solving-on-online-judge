var line = readline().split(' ');
var limak = line[0];
var bob = line[1];
var year = 0;

while(true){
    limak *= 3;
    bob *= 2;
    year++;
    if(limak > bob){
        break;
    }
}
print(year);