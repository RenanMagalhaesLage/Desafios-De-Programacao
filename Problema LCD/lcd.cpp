/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Problema LCD
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 20/10/2023
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

// Função para imprimir uma matriz de inteiros
void imprimirMatriz(const vector<vector<char>>& matriz, int size) {
    // Obtendo o número de linhas e colunas da matriz
    int linhas = matriz.size();
    int colunas = matriz[0].size(); // Assumindo que todas as linhas têm o mesmo número de colunas
    // Iterando sobre a matriz e imprimindo os elementos
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (j % (size+2) == 0) {
                printf(" ");
            }
            cout << matriz[i][j];
        }
        cout << endl;
    }
}


int main(){
    int size;
    string numberString;
    int number;
    vector<int> digitosVector;
    vector<string> representacao = {"abc0efg", "0c0f0", "acdeg", "acdfg", "0bcdf0", "abdfg", "abdefg", "ac0f0", "abcdefg", "abcdfg"};
    vector<char> letras;
    bool jahUsei = false;
    int lin=0, col=0;
    int maxCol = 0;
    int contLetras = 0;
    bool marcar = false;
    do{
        cin >> size >> numberString;
        if (size == 0 ){
            break;
        }
        // Itera sobre cada caractere da string e converte para inteiro
        for (char character : numberString) {
            // Converte o caractere para o valor inteiro e adiciona ao vetor
            digitosVector.push_back(character - '0');
        }
        //Alocando matriz para guardar os resultados
        vector<vector<char>> respostas((2 * size + 3), vector<char>(((size + 2) * numberString.size())));
        maxCol = size +2 ;
        //Preenchendo a matriz
        for (int i = 0; i < (2 * size + 3); ++i) {
            for (int j = 0; j < ((size + 2) * numberString.size()); ++j) {
                respostas[i][j] = 'x';
            }
        }
        
        for (int value : digitosVector) {
            for (char character : representacao[value]) {
                // Pegando cada letra da representação em letras do dígito
                letras.push_back(character);
            }
            for (int i = 0; i < letras.size(); i++)
            {
                //Se o dígito possui zero indica uma linha em branco
                if(letras[i] == '0'){ 
                    for (int j = 0; j < size+2; j++)
                    {
                        respostas[lin][col] = ' ';
                        col++;
                    }
                    lin++;  
                }
                //Verificando se não ultrapassa a coluna estimada
                if(col == maxCol){ 
                    col = (size + 2) * contLetras;
                }    
                if(letras[i] == 'a' || letras[i] == 'd' || letras[i] == 'g'){ //Criando um traçado
                    respostas[lin][col] = ' ';
                    col++;
                    for(int j=0; j < size; j++ ){
                        respostas[lin][col] = '-';
                        col++;
                    }
                    respostas[lin][col] = ' ';
                    col++;
                    lin++; 
                }
                if(letras[i] == 'b' || letras[i] == 'e'){ 
                    letras[i] = 'x';
                    for(int j=0; j < size; j++ ){
                        respostas[lin][col] = '|';
                        col++;
                        if(letras[i+1] == 'c' || letras[i+1] == 'f'){
                            for(int x=0; x < size; x++ ){
                                respostas[lin][col] = ' ';
                                col++;
                            }
                            respostas[lin][col] = '|';
                            marcar = true;
                            col++;
                        }else{
                            for(int x=0; x < size+1; x++ ){
                                respostas[lin][col] = ' ';
                                col++;

                            }
                        }
                        if(col == maxCol){
                            col = (size + 2) * contLetras;
                        }  
                        lin++;
                    }
                    if(marcar == true){
                        letras[i+1] = 'x';
                        marcar = false;
                    }
                }
                if(letras[i] == 'c' || letras[i] == 'f'){
                    letras[i] = 'x';
                    for(int j=0; j < size; j++ ){
                        for(int x=0; x < (size+1); x++ ){
                            respostas[lin][col] = ' ';
                            col++;

                        }

                        respostas[lin][col] = '|';
                        col++;
                        if(col == maxCol){
                            col = (size + 2) * contLetras;
                        }  
                        lin++;
                    }
                }
            }
            lin = 0;
            letras.clear();
            contLetras++;
            maxCol = (size + 2) + (contLetras * (size + 2)); // 4 8 12 16 20
            col = ((size + 2) * contLetras);
        }

        imprimirMatriz(respostas, size);
        cout << endl;
        //Zerando os valores
        digitosVector.clear();
        lin=0, col=0;
        maxCol = 0, contLetras = 0;
    }while(true);

    return 0;
}