/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Problema Tabula
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 01/12/2023
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <algorithm> 
#include <string.h> 
#include <cmath>
#include <iomanip> // Para setprecision
using namespace std;

double calcularRaioCirculoInscrito(double a, double b, double c) {
    // Calcular o semiperímetro
    double s = (a + b + c) / 2.0;

    // Calcular a área usando a fórmula de Herão
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Calcular o raio do círculo inscrito
    double raio = area / s;

    return raio;
}


int main(){
    double ladoA, ladoB, ladoC;
    while(cin >>ladoA >> ladoB>> ladoC){
        // Calcular o raio do círculo inscrito
        double raioCirculo = calcularRaioCirculoInscrito(ladoA, ladoB, ladoC);
        // Exibir o resultado
        if(ladoA == 0 && ladoB ==0 && ladoC == 0){
            raioCirculo = 0;
        }
        cout << fixed << setprecision(3) << "The radius of the round table is: " << raioCirculo << endl;

    }
    return 0;
}