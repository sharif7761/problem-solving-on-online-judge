/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int interGoal, gremioGoal, newDeparture, interWin = 0, gremioWin = 0, draw = 0, numOfGame = 0;
    while(true){
        cin >> interGoal >> gremioGoal;
        if(interGoal > gremioGoal){
            interWin++;
        } else if(interGoal < gremioGoal){
            gremioWin++;
        } else {
            draw++;
        }
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        numOfGame++;
        cin >> newDeparture;
        if(newDeparture != 1){
            break;
        }
    }

    cout << numOfGame << " grenais" << endl;
    cout << "Inter:" << interWin << endl;
    cout << "Gremio:" << gremioWin << endl;
    cout << "Empates:" << draw << endl;
    if(interWin > gremioWin) {
        cout << "Inter venceu mais" << endl;    
    } else if(interWin < gremioWin) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Não houve vencedor" << endl;
    }
    
        
    return 0;
}