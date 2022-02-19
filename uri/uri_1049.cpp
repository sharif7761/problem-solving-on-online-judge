#include <iostream>
 
using namespace std;
 
int main() {
    string inputOne, inputTwo, inputThree, result;
    cin >> inputOne >> inputTwo >> inputThree;
    if(inputOne == "vertebrado"){
        if(inputTwo == "ave"){
            if(inputThree == "carnivoro"){
                result = "aguia"; 
            }
            else if(inputThree == "onivoro"){
                result = "pomba";
            }
        }
        else if(inputTwo == "mamifero"){
            if(inputThree == "onivoro"){
                result = "homem"; 
            }
            else if(inputThree == "herbivoro"){
                result = "vaca";
            }
        }
    }
    
    else if(inputOne == "invertebrado"){
        if(inputTwo == "inseto"){
            if(inputThree == "hematofago"){
                result = "pulga"; 
            }
            else if(inputThree == "herbivoro"){
                result = "lagarta";
            }
        }
        else if(inputTwo == "anelideo"){
            if(inputThree == "hematofago"){
                result = "sanguessuga"; 
            }
            else if(inputThree == "onivoro"){
                result = "minhoca";
            }
        }
    }
    
    cout << result << endl;
    
    return 0;
}