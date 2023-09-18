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
int main() 
{
    int m, n, k;
    int number_of_cases;
    char word_game[m][n];
    int tam = 0;
    string line;
    scanf("%d\n",&number_of_cases);
    scanf("%d %d", &m, &n);
    cout << m << " " << n << endl;

    getline(cin, line);
    //Preenchendo a matriz do caça palavra
    for(int i = 0; i < m; i ++){
        getline(cin, line);
        tam = line.length();
        cout << line<< endl;
        for (int j = 0; i < n; j++)
        {
            word_game[i][j] = line[j];
        }
        
    }
    cin >> k;

    return 0;
}