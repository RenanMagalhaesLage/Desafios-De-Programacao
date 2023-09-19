/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Teclado
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 15/09/2023
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main() 
{
    string line, caracter, output = "";
    int tam = 0, tam_caracter;
    char sub_caracter;
    char teclado_um[14] = {'`', '1', '2', '3', '4', '5', '6', '7','8', '9','0','-', '=', '\0'};
    char teclado_dois[14] = {'Q', 'W','E', 'R', 'T', 'Y', 'U', 'I', 'O','P','[',']','\\','\0'};
    char teclado_tres[12] = {'A','S', 'D', 'F','G','H','J','K','L',';','\'','\0'};
    char teclado_quatro[11] = {'Z', 'X','C','V','B','N','M',',','.','/','\0'};

    while(getline(cin, line)){
        tam = line.length();
        for(int j =0; j < tam; j++){
            caracter = line[j] ;
            for(int i = 0; i < 14; i++){
                if(caracter[0] == teclado_um[i]){
                    output = output + teclado_um[i-1];
                }
                if(caracter[0] == teclado_dois[i]){
                    output = output + teclado_dois[i-1];
                }
            }
            for(int i = 0; i < 12; i++){
                if(caracter[0] == teclado_tres[i]){
                    output = output + teclado_tres[i-1];
                }
            }
            for(int i = 0; i < 11; i++){
                if(caracter[0] == teclado_quatro[i]){
                    output = output + teclado_quatro[i-1];
                }
            }
            if(caracter[0] == ' '){
                output = output + ' ';
            }
        }
        cout << output << endl;
        output.clear();
    }
    return 0;
}