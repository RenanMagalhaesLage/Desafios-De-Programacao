/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Competição
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 01/09/2023
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
using namespace std;

int main() 
{
    int numberOfCompetition;
    int problem, time, numberOfContestant;
    char l;
    int contestant[101][10];
    string space;
    int end;
    char line[20];
    int verify[101][10]; //Vetor para verivicar se ele já submeteu corretamente um programa --> 1 = yes 0 = no
    int numberOfProblems[101];
    int ordenar[101];
    bool terminou = false;
    scanf("%d\n",&numberOfCompetition);
    //printf("%d\n", numberOfCompetition);
    while (numberOfCompetition > 0){
        /*
            Zerando as matrizes
        */
        for (int i = 0; i <= 100; i++){
            for(int j = 0; j < 10; j++){
                contestant[i][j] = 0;
                verify[i][j] = 0;
            }
            numberOfProblems[i] = 0;
            ordenar[i] = i;
        }
        end = 0;
        while(getline(cin, space)){
            
            if(space.length() == 0){
                break;
                end = 1;
            }else{
                istringstream iss(space);
                iss >> numberOfContestant;
                iss >> problem;
                iss >> time;
                iss >> l;
                //cout << numberOfContestant << " " << problem << " " << time << " " << l << endl;
                /*
                    C --> Correct
                    I --> Incorrect
                    R --> clarication Request
                    U --> Unjudged
                    E --> Erroneous submission
                */
                if (l == 'C'){
                    if(verify[numberOfContestant][problem] == 0){
                        contestant[numberOfContestant][problem] += time;
                        verify[numberOfContestant][problem] = 1;
                        numberOfProblems[numberOfContestant] += 1;
                        //printf("O competidor %d acertou o problema numero %d, seu tempo agr é de = %d\n", numberOfContestant, problem, contestant[numberOfContestant][problem]);
                    }
                }else if(l == 'I'){
                    if(verify[numberOfContestant][problem] == 0){
                        contestant[numberOfContestant][problem] += 20;
                    }
                }else if(l == 'R' || l == 'U' || l == 'E'){
                    //Não faz nada
                }
            }
        }
        for (int i = 0; i <= 100; i++){
            for(int j = 0; j < 10; j++){
                if(contestant[i][j] != 0){
                    if(verify[i][j] == 1){
                        contestant[i][0] += contestant[i][j];
                    }
                }
            }
        }
        while(!terminou){
            terminou = true;
            for (int i = 0, aux = 0; i <= 100; i++){
                if(numberOfProblems[ordenar[i]] < numberOfProblems[ordenar[i+1]]){
                    aux = ordenar[i];
                    ordenar[i] = ordenar[i+1];
                    ordenar[i+1] = aux;
                    terminou = false;
                }else if(numberOfProblems[ordenar[i]] == numberOfProblems[ordenar[i+1]] && contestant[ordenar[i]][0] > contestant[ordenar[i+1]][0]){
                    aux = ordenar[i];
                    ordenar[i] = ordenar[i+1];
                    ordenar[i+1] = aux;
                    terminou = false;
                }
            }
        }
        for (int i = 0; i <= 100; i++){
            if(contestant[ordenar[i]][0] != 0){
                cout << ordenar[i] << " " << numberOfProblems[ordenar[i]] << " " << contestant[ordenar[i]][0] << endl;
            }
        }
                    

        cout << endl;
        numberOfCompetition--;

    }
    return 0;
}