/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Eight Queens
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 13/11/2023
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/

#include <iostream>
#include <string>
#include<math.h>
using namespace std;

void imprimirTabela(int tabela[8][4]) {
    // Imprime os cabeçalhos das colunas
    printf("%-3s%-3s%-4s%-4s\n", "i", "j", "add", "sub");

    // Itera sobre as linhas e colunas da tabela
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 4; j++) {
            // Imprime os valores da tabela formatados
            printf("%-3d", tabela[i][j]);
        }
        // Pula para a próxima linha após imprimir uma linha completa
        printf("\n");
    }
}

int main() 
{
    char tabuleiro[8][8];
    /*
        Tabela para verificar se estão na mesma coluna, na mesma linha e na mesma diagonal
        A primeira coluna armazena a posição na linha
        A segunda coluna armazena a posição na coluna
        A terceira coluna armazena o valor da soma das posições 
        A quarta coluna armazena o valor da subtração das posições

        Caso algumas desses valores repitam na coluna o tabuleiro está errado
    */
    int table[8][4]; 
    int x = 0, cont =0, contQueens = 0;
    bool valido = true; //Verifica caso o programa já tenha encontrado uma posição inválida
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> tabuleiro[i][j];
            if(tabuleiro[i][j] == '.'){
                cont++;
            }
            if(tabuleiro[i][j] == '*'){
                contQueens++;
                table[x][0] = i;
                table[x][1] = j;
                table[x][2] = i + j;
                table[x][3] = i - j;
                x++;
            }
        }
    }
    //imprimirTabela(table);
    if(cont == 64) // se é 64 significa que o tabuleiro é vazio, assim terminou a execução
    {
        valido = false;
    }else if(contQueens != 8){
        valido = false;
    }
    /*
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            printf("%c", tabuleiro[i][j]);
        }
        printf("\n");
    }
    */
    if(valido){
        for(int i = 0; i < 8; i++){
            for(int j = i+1; j < 8; j++){
                //Comparando se estão na mesma linha
                if(table[i][0] == table[j][0]){
                    valido = false;
                }
                //Comparando se estão na mesma coluna
                if(table[i][1] == table[j][1]){
                    valido = false;
                }
                //Comparando se estão na mesma diagonal 1
                if(table[i][2] == table[j][2]){
                    valido = false;
                }
                //Comparando se estão na mesma diagonal 2
                if(table[i][3] == table[j][3]){
                    valido = false;
                }
            }
        }
    }
    if(valido){
        printf("valid");
    }else{
        printf("invalid");
    }
    return 0;
}