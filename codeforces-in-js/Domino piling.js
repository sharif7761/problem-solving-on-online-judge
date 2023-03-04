var line = readline().split(' ');
var height = line[0];
var width = line[1];
var totalSize = parseInt(height) * parseInt(width);
var totalDominos =  Math.floor(totalSize / 2);
print(totalDominos)