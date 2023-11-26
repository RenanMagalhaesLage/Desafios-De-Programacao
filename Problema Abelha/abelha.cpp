/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Problema Abelha
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 24/11/2023
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <algorithm> 
#include <string.h> 
using namespace std;

void resposta(int coordX, int coordY){
    cout << coordX << " " << coordY<< endl;
}

int main(){
    int number;
    int coordX = 0;
    int coordY = 0;
    int cont = 1;
    bool control = true; //se for verdadeiro aumenta Y e diminui X, caso contrário aumenta X e diminui Y
    int quantidadeMeio = 0; //Variável para controlar quantas vezes tem que fazer operação solo 
    int quantidadeOperacao = 1;
    bool achou = false;
    while (cin >> number){
        //cout << number << endl;
        if(number == 1){
            resposta(coordX, coordY);
        }else {
            while(cont != number){
                if(control == true){ //aumenta Y (+y)
                    for (int i = 0; i < quantidadeOperacao; i++)
                    {
                        coordY++;
                        cont++;
                        if(cont == number){
                            resposta(coordX, coordY);
                            achou = true;
                            break;
                        }
                    }

                    if(achou){break;}

                    for (int i = 0; i < quantidadeMeio; i++)
                    {
                        coordY++;
                        coordX--;
                        cont++;
                        if(cont == number){
                            resposta(coordX, coordY);
                            achou = true;
                            break;
                        }
                    }

                    if(achou){break;}

                    for (int i = 0; i < quantidadeOperacao; i++)
                    {
                        coordX--;
                        cont++;
                        if(cont == number){
                            resposta(coordX, coordY);
                            achou = true;
                            break;
                        }                        
                    }
                    if(achou){break;}
                    //quantidadeOperacao++;
                    quantidadeMeio++;
                    control = false;
//==========================================================================================================                    
                }else{ //aumenta X (+x)
                    for (int i = 0; i < quantidadeOperacao; i++)
                    {
                        coordY--;
                        cont++;
                        if(cont == number){
                            resposta(coordX, coordY);
                            achou = true;
                            break;
                        }
                    }

                    if(achou){break;}

                    for (int i = 0; i < quantidadeMeio; i++)
                    {
                        coordY--;
                        coordX++;
                        cont++;
                        if(cont == number){
                            resposta(coordX, coordY);
                            achou = true;
                            break;
                        }
                    }

                    if(achou){break;}

                    for (int i = 0; i < quantidadeOperacao; i++)
                    {
                        coordX++;
                        cont++;
                        if(cont == number){
                            resposta(coordX, coordY);
                            achou = true;
                            break;
                        }                        
                    }
                    if(achou){break;}
                    quantidadeOperacao++;
                    control = true;
                }
                
            }
        }
        coordX = 0, coordY = 0, cont = 1;
        control = true; //se for verdadeiro aumenta Y e diminui X, caso contrário aumenta X e diminui Y
        quantidadeMeio = 0, quantidadeOperacao = 1;
        achou = false;

    }
    return 0;
}
