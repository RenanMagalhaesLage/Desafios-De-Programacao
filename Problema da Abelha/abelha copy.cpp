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
    int quantidadeMeio = 1; //Variável para controlar quantas vezes tem que fazer operação solo 
    while (cin >> number){
        cout << number << endl;
        if(number == 1){
            resposta(coordX, coordY);
        }else {
            while(cont != number){
                if(control == true){ //aumenta Y (+y)

                }else{

                }
                
            }
        }

    }
/*
+ y
-x

-y
-y +x
+x

+y
+y 
+y -x
-x
-x

-y
-y
-y +x
-y +x
+x
+x

+y
+y
+y
+y -x
+y -x
-x
-x
-x

-y
-y
-y
-y +x
-y +x
-y +x
+x
+x
+x

+y
+y
+y
+y
+y -x
+y -x
+y -x
-x
-x
-x
-x

-y
-y
-y
-y
-y +x 
-y +x
-y +x
-y +x
+x
+x
+x
+x

OBS: Cada hora aumenta a qtd de uma coordenada: aumenta no x, na proxima aumentará no y


*/
    return 0;
}
