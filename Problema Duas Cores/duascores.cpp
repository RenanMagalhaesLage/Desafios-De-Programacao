/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Problema Duas Cores
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 23/10/2023
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

#define cor 2
#define noncolor 0

/* Struct para representar os nós do grafo */
typedef struct
{
    int vizinhos[200];
    int qtd_vizinhos;
    int color;
    int visitado;
}node;

int main(){
    int number_nodes, number_edges,copy_edges;
    int vertice1, vertice2;
    node nodes[200];
    bool bicolor;
    
    while(true){
        bicolor = true;
        /* Iniciando a strcut */
        for(int i = 0; i < 200; i++){
            nodes[i].visitado = 0;
            nodes[i].qtd_vizinhos = 0;
            nodes[i].color = noncolor;
            for(int j = 0; j <200; j++){
                nodes[i].vizinhos[j] = 0;
            }
        }
        scanf("%d\n",&number_nodes);
        if(number_nodes == 0){
            break;
        }
        scanf("%d\n",&number_edges);
        copy_edges = number_edges;

        /* Adicionando os vizinhos --> possuem uma aresta entre eles*/
        while(copy_edges){
            cin >> vertice1 >> vertice2;
            nodes[vertice1].vizinhos[vertice2] = 1;
            nodes[vertice1].qtd_vizinhos++;
            nodes[vertice2].vizinhos[vertice1] = 1;
            nodes[vertice2].qtd_vizinhos++;
            //cout << vertice1 << " " << vertice2 << endl;
            copy_edges--;
        }

        int number_vizinho;
        /* Atribuindo cores --> caso não tenha sido visitado atribua uma cor para ele e a inversa para seus vizinhos*/
        for(int i = 0; i < 200; i++){
            if(nodes[i].visitado == 0){
                nodes[i].visitado = 1;
                if(nodes[i].color == noncolor){
                    nodes[i].color = cor;
                }
                for(int j = 0; j < 200; j++){
                    /* Possui vizinho em j ? */
                    if(nodes[i].vizinhos[j] == 1){
                        number_vizinho = j;
                        if(nodes[number_vizinho].visitado == 0){ /* Caso seu vizinho não tenha sido visitado --> recebe cor contrária */
                            nodes[number_vizinho].color = (-nodes[i].color);
                        }else {
                            if(nodes[number_vizinho].color == nodes[i].color){
                                bicolor = false;
                                break;
                            }
                        }
                    }
                    
                }
            }
        }
        if(bicolor){
            cout << "BICOLORABLE." << endl;

        }else{
            cout << "NOT BICOLORABLE." << endl;
        }  
    }
    return 0;
}