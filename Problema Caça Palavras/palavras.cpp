/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Problema Caça Palavra
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 18/09/2023
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
using namespace std;
#define NLIN 50
#define NCOL 50

string inverte (string word){
    int tamanho = word.length();
    string palavraInvertida = word;

    for (int i = 0; i < tamanho / 2; i++) {
        // Troca os caracteres da posição i com os da posição correspondente no final
        swap(palavraInvertida[i], palavraInvertida[tamanho - i - 1]);
    }

    return palavraInvertida;
}

int verifica_horizontal(int i, int j, string procurando, char word_game[][NCOL], int tam, int ehInvertida, int achado){
/*
    HORIZONTAL
*/
    string montando;
    char letra; 
    int achou = 0;
    if(achado == 0){
        //Veirificando se é possivel a palavra estar na linha, verifica a primeira e ultima letra da palavra
        if((word_game[i][j]==procurando[0] || (word_game[i][j] - 32)==procurando[0] || (word_game[i][j] + 32)==procurando[0])&& 
                (word_game[i][j+tam-1]==procurando[tam-1] ||(word_game[i][j+tam-1] - 32)==procurando[tam-1] || (word_game[i][j+tam-1]+32)==procurando[tam-1])){
                    //cout<< "exato "<< i << " " << j << endl;
                    //abort();
                    for(int z = 0; z <= tam; z++){

                        if(word_game[i][j+z] == procurando[z]){
                            montando = montando + word_game[i][j+z];
                        }else if((word_game[i][j+z] - 32) == procurando[z]){ //Upper
                            letra = word_game[i][j+z]- 32;
                            montando = montando + letra;
                        }else if((word_game[i][j+z] + 32) == procurando[z]){//Lower
                            letra = word_game[i][j+z]+ 32;
                            montando = montando + letra;
                        }
                        //cout << "Montando recebe: "<< word_game[i][z] << " " << i << " " << z << endl;
                    }
                    //cout << montando << " " << procurando << endl; 
                    if(montando == procurando){
                        //cout<< "ACHOUUU"<< endl;
                        if(ehInvertida == 1){
                            cout << i+1 << " " << j+tam <<endl;
                            achou = 1;
                        }else{
                            cout << i+1 << " " << j+1<<endl;
                            achou = 1;
                        }
                    }
                    montando.clear();
        }
    }
    if(achado == 0){
        return achou;
    }else{
        return achado;
    }
}

int verifica_vertical(int i, int j, string procurando, char word_game[][NCOL], int tam, int ehInvertida, int achado){
/*
Vertical
*/
    string montando;
    char letra;
    int achou = 0;
    if(achado == 0){
        if((word_game[i][j]==procurando[0] || (word_game[i][j]- 32)==procurando[0] || (word_game[i][j]+ 32)==procurando[0])&& 
                (word_game[i+tam-1][j]==procurando[tam-1]) ||(word_game[i+tam-1][j]- 32)==procurando[tam-1] || (word_game[i+tam-1][j] + 32)==procurando[tam-1]){
                        //cout<< "exato "<< i << " " << j << endl;
                        //abort();
                        for(int z = 0; z < tam; z++){
                            //cout << procurando[z] << endl;
                            if(word_game[i+z][j] == procurando[z]){
                                montando = montando + word_game[i+z][j];
                            }else if((word_game[i+z][j] - 32) == procurando[z]){ //Upper
                                letra = word_game[i+z][j]- 32;
                                montando = montando + letra;
                            }else if((word_game[i+z][j] + 32) == procurando[z]){//Lower
                                letra = word_game[i+z][j]+ 32;
                                montando = montando + letra;
                            }
                            //cout << "Montando recebe: "<< word_game[i][z] << " " << i << " " << z << endl;
                        }
                        //cout << montando << " " << procurando << endl; 
                        if(montando == procurando){
                            if(ehInvertida == 1){
                                cout << i+tam << " " << j+1 <<endl;
                                achou = 1;
                            }else{
                                cout << i+1 << " " << j+1 <<endl;
                                achou = 1;
                            }
                        }
                        montando.clear();
        }
    }
    if(achado == 0){
        return achou;
    }else{
        return achado;
    }
}

int verifica_diagonal_cima_direita(int i, int j, string procurando, char word_game[][NCOL], int tam, int achado){
    /*
        Diagonal Para Cima Direita
    */
   string montando;
   char letra;
   int achou = 0;
   if(achado == 0){
        if((word_game[i][j] == procurando[0] || (word_game[i][j]- 32) == procurando[0] || (word_game[i][j]+ 32) == procurando[0]) && 
            (word_game[i-tam+1][j+tam-1]==procurando[tam-1]) ||(word_game[i-tam+1][j+tam-1]- 32)==procurando[tam-1] || (word_game[i-tam+1][j+tam-1] + 32)==procurando[tam-1]){
            for(int z = 0; z < tam; z++){
            //cout << procurando[z] << " ---- " << word_game[i+z][j-z] << " ---- " << i+z << " ---- " << j-z << endl;
                if(word_game[i-z][j+z] == procurando[z]){
                                montando = montando + word_game[i-z][j+z];
                }else if((word_game[i-z][j+z] - 32) == procurando[z]){ //Upper
                                letra = word_game[i-z][j+z]- 32;
                                montando = montando + letra;
                }else if((word_game[i-z][j+z] + 32) == procurando[z]){//Lower
                                letra = word_game[i-z][j+z]+ 32;
                                montando = montando + letra;
                }
                //cout << "Montando recebe: "<< word_game[i][z] << " " << i << " " << z << endl;
            }
            //cout << montando << " " << procurando << endl; 
            if(montando == procurando){
                cout << i+1 << " " << j+1 << endl;
                achou = 1;
            }
            montando.clear();
        }
   }
    if(achado == 0){
        return achou;
    }else{
        return achado;
    }
}

int verifica_diagonal_cima_esquerda(int i, int j, string procurando, char word_game[][NCOL], int tam, int achado){
/*
    Diagonal Para Cima Esquerda
*/
    string montando;
    char letra;
    int achou = 0;
    if(achado == 0){
        if((word_game[i][j] == procurando[0] || (word_game[i][j]- 32) == procurando[0] || (word_game[i][j]+ 32) == procurando[0]) && 
            (word_game[i-tam+1][j-tam+1]==procurando[tam-1]) ||(word_game[i-tam+1][j-tam+1]- 32)==procurando[tam-1] || (word_game[i-tam+1][j-tam+1] + 32)==procurando[tam-1]){
            for(int z = 0; z < tam; z++){
                //cout << procurando[z] << " ---- " << word_game[i+z][j-z] << " ---- " << i+z << " ---- " << j-z << endl;
                if(word_game[i-z][j-z] == procurando[z]){
                    montando = montando + word_game[i-z][j-z];
                }else if((word_game[i-z][j-z] - 32) == procurando[z]){ //Upper
                    letra = word_game[i-z][j-z]- 32;
                    montando = montando + letra;
                }else if((word_game[i-z][j-z] + 32) == procurando[z]){//Lower
                    letra = word_game[i-z][j-z]+ 32;
                    montando = montando + letra;
                }
                //cout << "Montando recebe: "<< word_game[i][z] << " " << i << " " << z << endl;
            }
            //cout << montando << " " << procurando << endl; 
            if(montando == procurando){
                cout << i+1 << " " << j+1 << endl;
                achou = 1;
            }
            montando.clear();
        }
    }
    if(achado == 0){
        return achou;
    }else{
        return achado;
    }
}

int verifica_diagonal_baixo_esquerda(int i, int j, string procurando, char word_game[][NCOL], int tam, int achado){
/*
    Diagonal Para Baixo Esquerda
*/
    string montando;
    char letra;
    int achou = 0;
    if(achado == 0){
        if((word_game[i][j] == procurando[0] || (word_game[i][j]- 32) == procurando[0] || (word_game[i][j]+ 32) == procurando[0]) && 
            (word_game[i+tam-1][j-tam+1]==procurando[tam-1]) ||(word_game[i+tam-1][j-tam+1]- 32)==procurando[tam-1] || (word_game[i+tam-1][j-tam+1] + 32)==procurando[tam-1]){
            for(int z = 0; z < tam; z++){
                //cout << procurando[z] << " ---- " << word_game[i+z][j-z] << " ---- " << i+z << " ---- " << j-z << endl;
                if(word_game[i+z][j-z] == procurando[z]){
                    montando = montando + word_game[i+z][j-z];
                }else if((word_game[i+z][j-z] - 32) == procurando[z]){ //Upper
                    letra = word_game[i+z][j-z]- 32;
                    montando = montando + letra;
                }else if((word_game[i+z][j-z] + 32) == procurando[z]){//Lower
                    letra = word_game[i+z][j-z]+ 32;
                    montando = montando + letra;
                }
                //cout << "Montando recebe: "<< word_game[i][z] << " " << i << " " << z << endl;
            }
            //cout << montando << " " << procurando << endl; 
            if(montando == procurando){
                cout << i+1 << " " << j+1 << endl;
                achou = 1;
            }
            montando.clear();
        }
    }
    if(achado == 0){
        return achou;
    }else{
        return achado;
    }
}

int verifica_diagonal_baixo_direita(int i, int j, string procurando, char word_game[][NCOL], int tam, int achado){
/*
    Diagonal Para Baixo Direita
*/
    string montando;
    char letra;
    int achou = 0;
    if(achado == 0){
        if((word_game[i][j]==procurando[0] || (word_game[i][j]- 32)==procurando[0] || (word_game[i][j]+ 32)==procurando[0])&& 
            (word_game[i+tam-1][j+tam-1]==procurando[tam-1]) ||(word_game[i+tam-1][j+tam-1]- 32)==procurando[tam-1] || (word_game[i+tam-1][j+tam-1] + 32)==procurando[tam-1]){
            for(int z = 0; z < tam; z++){
                            //cout << procurando[z] << endl;
                if(word_game[i+z][j+z] == procurando[z]){
                    montando = montando + word_game[i+z][j+z];
                }else if((word_game[i+z][j+z] - 32) == procurando[z]){ //Upper
                    letra = word_game[i+z][j+z]- 32;
                    montando = montando + letra;
                }else if((word_game[i+z][j+z] + 32) == procurando[z]){//Lower
                    letra = word_game[i+z][j+z]+ 32;
                    montando = montando + letra;
                }
                            //cout << "Montando recebe: "<< word_game[i][z] << " " << i << " " << z << endl;
            }
                        //cout << montando << " " << procurando << endl; 
            if(montando == procurando){
                cout << i+1 << " " << j+1 << endl;
                achou = 1;
            }
            montando.clear();
        }
    }
    if(achado == 0){
        return achou;
    }else{
        return achado;
    }
}

int main() 
{
    int m, n, k;
    int number_of_cases;
    int tam = 0, jahApareceu = 0;
    string line, caracter;
    string procurando, invertida;
    scanf("%d\n",&number_of_cases);
    while(number_of_cases > 0){
        scanf("%d %d\n", &m, &n);
        //cout << m << " " << n << endl;
        char word_game[NLIN][NCOL];
        for(int i = 0; i < m; i ++){
            for (int j = 0; j < n; j++)
            {
                word_game[i][j] = '\0';
            }
            
        }
        //Preenchendo a matriz do caça palavra
        for(int i = 0; i < m; i ++){
            getline(cin, line);
            //cout << line<< endl;
            for (int j = 0; j < n; j++)
            {
                caracter = line[j];
                word_game[i][j] = caracter[0];
            }
            
        }
        scanf("%d\n", &k);
        //cout << k << endl;
        string words[k];
        for(int i = 0; i < k; i++){
            getline(cin, line);
            //cout << line<< endl;
            words[i] = line;
        }
        
        for(int w = 0; w < k; w++){
            procurando = words[w];
            tam = procurando.length();
            for(int i = 0; i < m; i ++){
                for (int j = 0; j < n; j++)
                {
                    jahApareceu = verifica_horizontal(i, j, procurando, word_game, tam, 0, jahApareceu);
                    //Verificando horizontal inversa
                    invertida = inverte(procurando);
                    jahApareceu = verifica_horizontal(i, j, invertida, word_game, tam, 1, jahApareceu);

                    jahApareceu = verifica_vertical(i, j, procurando, word_game, tam, 0, jahApareceu);
                    //Verificando vertical inversa
                    invertida = inverte(procurando);
                    jahApareceu = verifica_vertical(i, j, invertida, word_game, tam, 1, jahApareceu);
                    
                    jahApareceu = verifica_diagonal_baixo_direita(i, j, procurando, word_game, tam, jahApareceu);
                    jahApareceu = verifica_diagonal_baixo_esquerda(i, j, procurando, word_game, tam, jahApareceu);
                    
                    jahApareceu = verifica_diagonal_cima_direita(i, j, procurando, word_game, tam, jahApareceu);
                    //cout << "Jah apareceu? "<< jahApareceu << " " << procurando << endl;
                    jahApareceu = verifica_diagonal_cima_esquerda(i, j, procurando, word_game, tam, jahApareceu);
                }
            
            }
            jahApareceu = 0;
        }
        cout << endl;
        number_of_cases--;
    }
    
    


    return 0;
}