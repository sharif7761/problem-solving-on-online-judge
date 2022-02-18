#include <iostream>

using namespace std;
 
int main() {
    int StartHour, StartMin, EndHour, EndMin, Hour, Min;
    cin >> StartHour >> StartMin >> EndHour >> EndMin;
    
    if(EndMin > StartMin){
        Min = EndMin - StartMin;
        if(EndHour < StartHour) {
            Hour = (EndHour + 24) - StartHour;
        }
        else {
            Hour = EndHour - StartHour;
        }        
    }
    else if(EndMin < StartMin){ 
        Min = (EndMin + 60) - StartMin;
        EndHour -= 1;
        if (EndHour < StartHour){
            Hour = (EndHour + 24) - StartHour;
        }
        else {
            Hour = EndHour - StartHour;
        }
    }
    else if(EndHour == StartHour && EndMin == StartMin){
        Hour = 24;
        Min = 0;
    }
    
    cout << "O JOGO DUROU "<< Hour <<" HORA(S) E " << Min << " MINUTO(S)" <<endl;
    
    return 0;
}