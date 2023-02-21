var line = readline().split(' ');
var formation = line[0];
var count = 1;
var isDangerous = 'NO';
for (var i = 0; i < formation.length - 1; i++) {
    if(formation[i] == formation[i+1]){
        count++;
        if(count == 7){
        isDangerous = 'YES';
        break;
        }
    }
    else {
        count = 1;
    }
} 

print(isDangerous);