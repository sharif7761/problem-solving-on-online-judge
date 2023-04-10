// https://codeforces.com/problemset/problem/734/A

var line = readline().split(' ');
var input = line[0];
var winnersInput = readline().split(' ');
var winners = winnersInput[0];
var countAnton = 0;
var countDarik = 0;
for (var i = 0; i < winners.length; i++) {
    if(winners[i] === 'A'){
        countAnton++;
    } else {
        countDarik++;
    }
}
if(countAnton > countDarik){
   print('Anton');
} else if(countAnton < countDarik){
    print('Danik');
} else {
    print('Friendship');
}