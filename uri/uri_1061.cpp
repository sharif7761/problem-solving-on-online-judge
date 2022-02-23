#include <iostream>
using namespace std;

int main(){
 string temp;
 int start_hour, end_hour, start_min, end_min, start_day, end_day, start_sec, end_sec;

 cin >> temp >> start_day;
 cin >> start_hour >> temp >> start_min >> temp >> start_sec;
 cin >> temp >> end_day;
 cin >> end_hour >> temp >> end_min >> temp >> end_sec;
 
start_sec = end_sec - start_sec;
start_min = end_min - start_min;
start_hour = end_hour - start_hour;
start_day = end_day - start_day;

if(start_sec < 0){
	start_sec+=60;
	start_min--;
}

if(start_min < 0){
	start_min+=60;
	start_hour--;
}

if(start_hour < 0){
	start_hour += 24;
	start_day--;
}
     cout << start_day << " dia(s)" << endl;
     cout << start_hour << " hora(s)" << endl;
     cout << start_min << " minuto(s)" << endl;
     cout << start_sec << " segundo(s)" << endl;

 return 0;
}
