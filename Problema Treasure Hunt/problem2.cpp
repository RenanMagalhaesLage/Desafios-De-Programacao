/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Competição
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 16/10/2023
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <algorithm> 
#include <string.h> 
#include <vector>
#include <math.h>
using namespace std;

int main(){
    int r, c;
    int moves = 0;
    scanf("%d %d\n", &r, &c);
    char game[200][200];
    for(int i = 0; i < 200; i++){
        for (int j = 0; j < 200; j++)
        {
            game[i][j] = '.';
        }
        
    }
    char movimento;
    for(int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
        {
            scanf("%c", &movimento);
            game[i][j] = movimento;
            //cout << game[i][j] << endl;
        }
        scanf("\n");
        
    }
    int posicaoR = 0, posicaoC = 0;
    int tesouro = 0;
    int qtd_moves = r * c;
    //cout << qtd_moves << endl;
    while(tesouro == 0){
        if(game[posicaoR][posicaoC] == 'N'){
            posicaoR = posicaoR - 1;
            moves++;
            if(posicaoR < 0){
                cout << "Out" << endl;
                break;
            }
        }else if(game[posicaoR][posicaoC] == 'S'){
            posicaoR = posicaoR + 1;
            moves++;
            if(posicaoR > r-1){
                cout << "Out" << endl;
                break;
            }
        }else if(game[posicaoR][posicaoC] == 'W'){
            posicaoC = posicaoC -1;
            moves++;
            if(posicaoC < 0){
                cout << "Out" << endl;
                break;
            }
        }else if(game[posicaoR][posicaoC] == 'E'){
            posicaoC = posicaoC + 1;
            moves++;
            if(posicaoC > c-1){
                cout << "Out" << endl;
                break;
            }
        }else if(game[posicaoR][posicaoC] == 'T'){
            tesouro = 1;
        }
        if(moves >= r*c){
            cout << "Lost" << endl;
            break;
        }
    }
    if (tesouro == 1)
    {
        cout << moves << endl;
    }
    
    


    return 0;
}