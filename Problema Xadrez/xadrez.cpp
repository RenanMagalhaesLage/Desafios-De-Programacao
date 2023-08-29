/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Xadrez
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 25/08/2023
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    char tabuleiro[8][8];
    int fim = 0, cont =0;
    int esquerda = 0, direita = 0, cima = 0, baixo = 0;
    int game = 0; //Variável para controlar o número de jogos
    int livre = 0; // Variável que serve para verificar se o caminho entre o rei e o check está livre
    int check = 0;
    int verifica = 0; // Variável para verificar caso ele já esteja em posição de check, criada para evitar que ele esteja em check em mais de duas posições
    int primeira = 0; //Se for a primeira execução não irá quebrar a linha, serve apenas para formatar a saída

    while (fim != 1){
        /* Preenchendo o tabuleiro com os valores */
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cin >> tabuleiro[i][j];
                if(tabuleiro[i][j] == '.'){
                    cont++;
                }
            }
        }
        /*
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                printf("%c", tabuleiro[i][j]);
            }
            printf("\n");
        }*/
        if(cont == 64) // se é 64 significa que o tabuleiro é vazio, assim terminou a execução
        {
            fim = 1;
            break;
        }
        cont = 0;
        if(primeira == 0){
            primeira = 1;
        }else{
            cout << endl;
        }

        game++;

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                /*Branco = Maiusculo    Preto = Minúsculo*/

                /*Peão --> Pawn  | p or P*/
                /*Torre --> Rook  | r or R*/
                /*Cavalo --> Knight  | n or N*/
                /*Bispo --> Bishop  | b or B*/
                /*Rainha --> Queen  | q or Q*/
                /*Rei --> King  | k or K*/

                //printf("Cima = %d  Baixo = %d  Esquerda = %d  Direita = %d \n", cima, baixo, esquerda, direita);

                
                /*
                    VERIFICANDO O REI PRETO
                */
                if (tabuleiro[i][j] == 'k'){
                    direita = 7 - j;
                    esquerda = j;

                    cima = i;
                    baixo = 7 - i;

                    /*
                        OPERAÇÕES DE VERIFICAÇÃO DE MOVIMENTOS PARA BAIXO
                    */
                    if(baixo > 0)
                    {
                        /*Verificando diagonal direita de baixo*/
                        for(int x = 1; x <= direita, (i+x) < 7; x++){
                            if(tabuleiro[i+x][j+x] == 'B' || tabuleiro[i+x][j+x] == 'Q')
                            {
                                for(int y = 1; y < x; y++){
                                    if(tabuleiro[i+y][j+y] != '.')
                                    {
                                        livre++;
                                    }
                                }
                                if(livre == 0 && verifica == 0){
                                    printf("Game #%d: black king is in check.", game);
                                    //printf("O rei[%d][%d] está em check por [%d][%d], direita = %d", i,j, i+x, j+x, direita);
                                    //cout << "1" << endl;
                                    verifica = 1;
                                    check++;
                                }


                            }
                        }

                        livre = 0;

                        /*Verificando diagonal esquerda de baixo*/
                        for(int x = 1; x <= esquerda; x++){
                            if(tabuleiro[i+x][j-x] == 'B' || tabuleiro[i+x][j-x] == 'Q')
                            {
                                for(int y = 1; y < x; y++){
                                    if(tabuleiro[i+y][j-y] != '.')
                                    {
                                        livre++;
                                    }
                                }
                                if(livre == 0 && verifica == 0){
                                    printf("Game #%d: black king is in check.", game);
                                    verifica = 1;
                                    check++;
                                }
                            }
                        }

                        livre = 0;

                        /*Verificando a coluna em baixo*/
                        for(int x = 1; x <= baixo; x++){
                            if(tabuleiro[i+x][j] == 'R' || tabuleiro[i+x][j] == 'Q')
                            {
                                for(int y = 1; y < x; y++){
                                    if(tabuleiro[i+y][j] != '.')
                                    {
                                        livre++;
                                    }
                                }
                                if(livre == 0 && verifica == 0){
                                    printf("Game #%d: black king is in check.", game);
                                    verifica = 1;
                                    check++;
                                }

                            }
                        }

                        livre = 0;

                        /*Verificando se está em check pelo Cavalo (Knight) PARA BAIXO*/
                        if((tabuleiro[i+2][j+1] == 'N' || tabuleiro[i+2][j-1] == 'N' || tabuleiro[i+1][j+2] == 'N' || tabuleiro[i+1][j-2] == 'N') && verifica == 0){
                            printf("Game #%d: black king is in check.", game);
                            verifica = 1;
                            check++;
                        }  

                    }

                    /*
                        OPERAÇÕES DE VERIFICAÇÃO DE MOVIMENTOS PARA CIMA
                    */
                    if(cima > 0)
                    {
                        /*Verificando diagonal esquerda de cima*/
                        for(int x = 1; x <= esquerda; x++){
                            if(tabuleiro[i-x][j-x] == 'B' || tabuleiro[i-x][j-x] == 'Q')
                            {
                                for(int y = 1; y < x; y++){
                                    if(tabuleiro[i-y][j-y] != '.')
                                    {
                                        livre++;
                                    }
                                }
                                if(livre == 0 && verifica == 0){
                                    printf("Game #%d: black king is in check.", game);
                                    verifica = 1;
                                    check++;
                                }

                            }
                        } 

                        livre = 0;

                        /*Verificando diagonal direita de cima*/
                        for(int x = 1; x <= direita; x++){
                            if(tabuleiro[i-x][j+x] == 'B' || tabuleiro[i+x][j+x] == 'Q')
                            {
                                for(int y = 1; y < x; y++){
                                    if(tabuleiro[i-y][j+y] != '.')
                                    {
                                        livre++;
                                    }
                                }
                                if(livre == 0 && verifica == 0){
                                    printf("Game #%d: black king is in check.", game);
                                    verifica = 1;
                                    check++;
                                }

                            }
                        }

                        livre = 0;

                        /*Verificando a coluna em cima*/
                        for(int x = 1; x <= cima; x++){
                            if(tabuleiro[i-x][j] == 'R' || tabuleiro[i-x][j] == 'Q')
                            {
                                for(int y = 1; y < x; y++){
                                    if(tabuleiro[i-y][j] != '.')
                                    {
                                        livre++;
                                    }
                                }
                                if(livre == 0 && verifica == 0){
                                    printf("Game #%d: black king is in check.", game);
                                    verifica = 1;
                                    check++;
                                }

                            }
                        }

                        livre = 0;

                        /*Verificando se está em check pelo Cavalo (Knight) PARA CIMA*/
                        if((tabuleiro[i-2][j-1] == 'N' || tabuleiro[i-2][j+1] == 'N' || tabuleiro[i-1][j+2] == 'N' || tabuleiro[i-1][j-2] == 'N')&& verifica == 0){
                            printf("Game #%d: black king is in check.", game);
                            verifica = 1;
                            check++;
                        }  
                        
                    }

                    /*Verificando a o lado esquerdo*/
                    for(int x = 1; x <= esquerda; x++){
                        if(tabuleiro[i][j-x] == 'R' || tabuleiro[i][j-x] == 'Q')
                        {
                            for(int y = 1; y < x; y++){
                                if(tabuleiro[i][j-y] != '.')
                                {
                                    livre++;
                                }
                            }
                            if(livre == 0 && verifica == 0){
                                printf("Game #%d: black king is in check.", game);
                                verifica = 1;
                                check++;
                            }

                        }
                    }

                    livre = 0;

                    /*Verificando a o lado direito*/
                    for(int x = 1; x <= direita; x++){
                        if(tabuleiro[i][j+x] == 'R' || tabuleiro[i][j+x] == 'Q')
                        {
                            for(int y = 1; y < x; y++){
                                if(tabuleiro[i][j+y] != '.')
                                {
                                    livre++;
                                }
                            }
                            if(livre == 0 && verifica == 0){
                                printf("Game #%d: black king is in check.", game);
                                verifica = 1;
                                check++;
                            }

                        }
                    }

                    livre = 0;

                    /*Verificar se está em check pelo Peão (Pawn)*/
                    if((tabuleiro[i+1][j-1] == 'P' || tabuleiro[i+1][j+1] == 'P') && verifica == 0){
                        printf("Game #%d: black king is in check.", game);
                        verifica = 1;
                        check++;
                    }   
                }

                /*
                    VERIFICANDO O REI BRANCO
                */
                verifica = 0;
                if (tabuleiro[i][j] == 'K'){
                    direita = 7 - j;
                    esquerda = j;

                    cima = i;
                    baixo = 7 - i;

                    /*
                        OPERAÇÕES DE VERIFICAÇÃO DE MOVIMENTOS PARA BAIXO
                    */
                    if(baixo > 0)
                    {
                        /*Verificando diagonal direita de baixo*/
                        for(int x = 1; x <= direita; x++){
                            if(tabuleiro[i+x][j+x] == 'b' || tabuleiro[i+x][j+x] == 'q')
                            {
                                for(int y = 1; y < x; y++){
                                    if(tabuleiro[i+y][j+y] != '.')
                                    {
                                        livre++;
                                    }
                                }
                                if(livre == 0 && verifica == 0){
                                    printf("Game #%d: white king is in check.", game);
                                    verifica = 1;
                                    check++;
                                }


                            }
                        }

                        livre = 0;

                        /*Verificando diagonal esquerda de baixo*/
                        for(int x = 1; x <= esquerda; x++){
                            if(tabuleiro[i+x][j-x] == 'b' || tabuleiro[i+x][j-x] == 'q')
                            {
                                for(int y = 1; y < x; y++){
                                    if(tabuleiro[i+y][j-y] != '.')
                                    {
                                        livre++;
                                    }
                                }
                                if(livre == 0 && verifica == 0){
                                    printf("Game #%d: white king is in check.", game);
                                    verifica = 1;
                                    check++;
                                }
                            }
                        }

                        livre = 0;

                        /*Verificando a coluna em baixo*/
                        for(int x = 1; x <= baixo; x++){
                            if(tabuleiro[i+x][j] == 'r' || tabuleiro[i+x][j] == 'q')
                            {
                                for(int y = 1; y < x; y++){
                                    if(tabuleiro[i+y][j] != '.')
                                    {
                                        livre++;
                                    }
                                }
                                if(livre == 0 && verifica == 0){
                                    printf("Game #%d: white king is in check.", game);
                                    verifica = 1;
                                    check++;
                                }

                            }
                        }

                        livre = 0;

                        /*Verificando se está em check pelo Cavalo (Knight) PARA BAIXO*/
                        if((tabuleiro[i+2][j+1] == 'n' || tabuleiro[i+2][j-1] == 'n' || tabuleiro[i+1][j+2] == 'n' || tabuleiro[i+1][j-2] == 'n')&& verifica == 0){
                            printf("Game #%d: white king is in check.", game);
                            verifica = 1;
                            check++;
                        }  

                    }

                    /*
                        OPERAÇÕES DE VERIFICAÇÃO DE MOVIMENTOS PARA CIMA
                    */
                    if(cima > 0)
                    {
                        /*Verificando diagonal esquerda de cima*/
                        for(int x = 1; x <= esquerda; x++){
                            if(tabuleiro[i-x][j-x] == 'b' || tabuleiro[i-x][j-x] == 'q')
                            {
                                for(int y = 1; y < x; y++){
                                    if(tabuleiro[i-y][j-y] != '.')
                                    {
                                        livre++;
                                    }
                                }
                                if(livre == 0 && verifica == 0){
                                    printf("Game #%d: white king is in check.", game);
                                    verifica = 1;
                                    check++;
                                }

                            }
                        } 

                        livre = 0;

                        /*Verificando diagonal direita de cima*/
                        for(int x = 1; x <= direita; x++){
                            if(tabuleiro[i-x][j+x] == 'b' || tabuleiro[i+x][j+x] == 'q')
                            {
                                for(int y = 1; y < x; y++){
                                    if(tabuleiro[i-y][j+y] != '.')
                                    {
                                        livre++;
                                    }
                                }
                                if(livre == 0 && verifica == 0){
                                    printf("Game #%d: white king is in check.", game);
                                    verifica = 1;
                                    check++;
                                }

                            }
                        }

                        livre = 0;

                        /*Verificando a coluna em cima*/
                        for(int x = 1; x <= cima; x++){
                            if(tabuleiro[i-x][j] == 'r' || tabuleiro[i-x][j] == 'q')
                            {
                                for(int y = 1; y < x; y++){
                                    if(tabuleiro[i-y][j] != '.')
                                    {
                                        livre++;
                                    }
                                }
                                if(livre == 0 && verifica == 0){
                                    printf("Game #%d: white king is in check.", game);
                                    verifica = 1;
                                    check++;
                                }

                            }
                        }

                        livre = 0;

                        /*Verificando se está em check pelo Cavalo (Knight) PARA CIMA*/
                        if((tabuleiro[i-2][j-1] == 'n' || tabuleiro[i-2][j+1] == 'n' || tabuleiro[i-1][j+2] == 'n' || tabuleiro[i-1][j-2] == 'n')&& verifica == 0){
                            printf("Game #%d: white king is in check.", game);
                            verifica = 1;
                            check++;
                        }  
                        
                    }

                    /*Verificando a o lado esquerdo*/
                    for(int x = 1; x <= esquerda; x++){
                        if(tabuleiro[i][j-x] == 'r' || tabuleiro[i][j-x] == 'q')
                        {
                            for(int y = 1; y < x; y++){
                                if(tabuleiro[i][j-y] != '.')
                                {
                                    livre++;
                                }
                            }
                            if(livre == 0 && verifica == 0){
                                printf("Game #%d: white king is in check.", game);
                                verifica = 1;
                                check++;
                            }

                        }
                    }

                    livre = 0;

                    /*Verificando a o lado direito*/
                    for(int x = 1; x <= direita; x++){
                        if(tabuleiro[i][j+x] == 'r' || tabuleiro[i][j+x] == 'q')
                        {
                            for(int y = 1; y < x; y++){
                                if(tabuleiro[i][j+y] != '.')
                                {
                                    livre++;
                                }
                            }
                            if(livre == 0 && verifica == 0){
                                printf("Game #%d: white king is in check.", game);
                                verifica = 1;
                                check++;
                            }

                        }
                    }

                    livre = 0;

                    /*Verificar se está em check pelo Peão (Pawn)*/
                    if((tabuleiro[i-1][j-1] == 'p' || tabuleiro[i-1][j+1] == 'p')&& verifica == 0){
                        printf("Game #%d: white king is in check.", game);
                        verifica = 1;
                        check++;
                    }   
                
                }

            }
        }

        if(check == 0){
            printf("Game #%d: no king is in check.", game);
        }
        check = 0;
        verifica = 0;
    }
    return 0;
}