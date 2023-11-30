/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Trabalho Labirinto
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 27/10/2023
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <queue>
using namespace std;

void imprime(int copia_height, int copia_width, vector<vector<int>>& lab){
    /* IMPRIMINDO A MATRIZ */
    for (int i = 0; i < copia_height; i++)
    {
        for (int j = 0; j < copia_width; j++)
        {
            if (lab[i][j] == 0){
                cout<< " "<< " ";
            }else{
                cout << lab[i][j] << " ";
            }
        }
        cout << endl;
    } 
}
//Criando uma borda no labirinto
void drawBorder(int rows, int cols, int borderValue, vector<vector<int>>& lab) {
    // Desenha a borda superior
    for (int j = 0; j < cols; j++) {
        lab[0][j] = borderValue;
    }

    // Desenha a borda inferior
    for (int j = 0; j < cols; j++) {
        lab[rows - 1][j] = borderValue;
    }

    // Desenha a borda esquerda
    for (int i = 1; i < rows - 1; i++) {
        lab[i][0] = borderValue;
    }

    // Desenha a borda direita
    for (int i = 1; i < rows - 1; i++) {
        lab[i][cols - 1] = borderValue;
    }
}


struct ponto{
    int i;
    int j;
};

int fill(int i, int j, vector<vector<int>>& lab){
    bool ehCyclo = true;
    int qtd = 0;
    queue<ponto> fila;
    fila.push({i,j});
    ponto cur, next, dir[4]={0,1,1,0,0,-1,-1,0};
    lab[i][j]=1;
    qtd++;
    while(!fila.empty()){
        cur = fila.front();
        fila.pop();
        for(int k = 0; k < 4; k++){
            next.i = cur.i + dir[k].i;
            next.j = cur.j + dir[k].j;
            //Verificar se é ponto fora da borda, se for fora retornar false
            if (lab[next.i][next.j] == 5){
                ehCyclo = false;
            }

            if (!lab[next.i][next.j]){
                lab[next.i][next.j] = 1;
                qtd++;
                fila.push(next);
                //imprime(14,20);
                //cout << endl;
            }
        }
    }
    if(!ehCyclo){
        return 0;
    }else{
        return (qtd/3);
    }
}

int main() 
{
    int width, height; // Largura e altura
    int copia_width, copia_height; // Largura e altura
    int qtdCycles= 0; //Quantidade de ciclos
    priority_queue<int> cycle;
    int longest = 0; //Maior ciclo
    //bool ehCiclo;
    char simbolo;
    int qtdMaze=0;
    int teste = 0;
    while(true){
        scanf("%d %d\n",&width, &height);
        vector<vector<int>> lab(((height*3)+2), vector<int>(((width*3)+2), 0));
        if(width == 0 && height ==0){ //Fim de arquivo
            break;
        }
        qtdMaze++;
        cout<< "Maze #"<< qtdMaze <<":"<< endl;
        if(width == 1 || height == 1){ //Labirinto de coluna ou linha == 1. 
            cout << "There are no cycles."<< endl;
            cout << endl;
            for(int i=0; i < width; i++){
                for (int j = 0; j < height; j++)
                {
                    cin >>simbolo;
                }
                
            }
        }else{
            copia_width = (width*3)+2;
            copia_height = (height*3)+2;
            drawBorder(copia_height, copia_width, 5, lab);//Adicionando uma borda no labirinto     
            for (int i = 1; i < height*3; i = i +3)
            {
                for (int j = 1; j < width*3; j = j+3)
                {
                    cin >> simbolo;
                    if(simbolo == '/'){
                        /*
                            001
                            010
                            100
                        */
                    lab[i][j] = 0;
                    lab[i][j+1] = 0;
                    lab[i][j+2] = 1;

                    lab[i+1][j] = 0;
                    lab[i+1][j+1] = 1;
                    lab[i+1][j+2] = 0;

                    lab[i+2][j] = 1;
                    lab[i+2][j+1] = 0;
                    lab[i+2][j+2] = 0;

                    }
                    if(simbolo == '\\'){
                        /*
                            100
                            010
                            001
                        */
                    lab[i][j] = 1;
                    lab[i][j+1] = 0;
                    lab[i][j+2] = 0;

                    lab[i+1][j] = 0;
                    lab[i+1][j+1] = 1;
                    lab[i+1][j+2] = 0;

                    lab[i+2][j] = 0;
                    lab[i+2][j+1] = 0;
                    lab[i+2][j+2] = 1;
                    }
                }
            }
            /* Verificando ciclos */
            for (int i = 1; i < height*3; i++)
            {
                for (int j = 1; j < width*3; j++)
                {
                    // Se for ponto de borda da matriz não pode ser pintado
                    // Caso contrário pintar e colocar seus vizinhos em uma fila

                    //Para verificar isso chamar a função fill para cada ponto, se retornar true achou um ciclo
                    if(lab[i][j] == 0){
                        qtdCycles = fill(i,j, lab);
                        if(qtdCycles != 0){
                            cycle.push(qtdCycles);
                        }
                    }
                    /*
                    if(ehCiclo == true){
                        cout << "i= "<< i<< "j= "<< j<< endl;
                        abort();
                        cycles++;
                    }*/
                }
            }
            if(cycle.empty()){
                cout << "There are no cycles."<< endl;
                cout << endl;
            }else{
                cout << cycle.size() << " Cycles; the longest has length " << cycle.top() << "." <<endl;
                cout << endl;
            }
            
            //cout << "Quantidade de ciclos " << cycle.front() << endl;
            //cycle.pop();
            //cout << "Quantidade de ciclos " << cycle.front() << endl;
            
        }
        // Limpar a fila
        while (!cycle.empty()) {
            cycle.pop();
        }
        qtdCycles= 0;
        
    }
    return 0;
}