var input = readline().split('+');
var digits = input.map(Number);
digits.sort();
var output = digits.join('+');
print(output);