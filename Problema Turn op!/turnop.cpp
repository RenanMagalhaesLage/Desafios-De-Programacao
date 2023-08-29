#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int numReclamacao;
    cin >> numReclamacao;
    int volume = 7;
    string ordem;
    while(numReclamacao > 0){
        cin >> ordem;
        cin >> ordem;
        if(ordem == "op!" && volume < 10){
            volume++;
        }
        if(ordem == "ned!" && volume > 0){
            volume--;
        }
        numReclamacao--;
    }
    cout << volume << endl;
    return 0;
}