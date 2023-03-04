var input = readline().split(' ');
var str = input[0].toLowerCase();
var result = ''
for(var i = 0; i < str.length; i++){
    if(!str[i].match(/[aeiouy]/ig)){
        result += '.'+str[i];
    }
}

print(result)