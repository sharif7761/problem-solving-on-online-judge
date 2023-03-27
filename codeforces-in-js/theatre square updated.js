var line2 = readline().split(' ');
var str1 = line2[0];
var str2 = line2[1];
var str3 = line2[2];
var heigth = Math.ceil(parseInt(str1) / parseInt(str3))
var weigth = Math.ceil(parseInt(str2) / parseInt(str3))
print(heigth * weigth)