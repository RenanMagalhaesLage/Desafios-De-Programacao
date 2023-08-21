/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: The 3n + 1 Problem
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 21/08/2023
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/

#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int i, j, contador, inverte;
    int cycleLegth = 0;
    
    int x, y;

    while (cin >> i >> j){
        if (i > j){
            inverte = j;
            j = i;
            i = inverte;
            inverte = 1;
        }
        x = j;
        while(x >= i){
            contador = 1;
            y = x;
            while(y != 1){
                if(y % 2 == 0){
                    y = y / 2;
                }else{
                    y = (y * 3) + 1;
                }
                //cout << y << "  ";
                contador++;
            }
            //cout << endl;
            //cout << "leght = " << contador << endl;

            if(contador > cycleLegth){
                cycleLegth = contador;
            }
            x--;
        }
        if(inverte == 1){
            cout << j << " " << i << " " << cycleLegth << endl;
        }else{
            cout << i << " " << j << " " << cycleLegth << endl;
        }
        cycleLegth = 0;
    }
    return 0;   
}

