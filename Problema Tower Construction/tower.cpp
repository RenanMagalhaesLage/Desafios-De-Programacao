#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int quantidade;
    int peca;
    int base = 0;
    int primeira = 0;
    int numTower = 0;
    cin >> quantidade;
    for(int i = 0; i < quantidade; i++)
    {
        cin >> peca;
        //printf("peca = %d\n",peca);
        if(primeira == 0)
        {
            base = peca;
            numTower++;
            primeira = 1;
        }
        if(peca > base){
            base = peca;
            numTower++;
        }
        base = peca;

    }
    cout << numTower << endl;
    return 0;
}