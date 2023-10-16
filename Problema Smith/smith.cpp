/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Problema Smith
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 09/10/2023
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

bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    
    if (numero <= 3) {
        return true;
    }
    
    if (numero % 2 == 0 || numero % 3 == 0) {
        return false;
    }
    
    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}

vector<long int> calcularFatoresPrimos(int numero) {
    vector<long int> fatoresPrimos;
    
    // Encontrar os fatores primos de 2
    while (numero % 2 == 0) {
        fatoresPrimos.push_back(2);
        numero /= 2;
    }

    // Encontrar os fatores primos ímpares
    for (int i = 3; i <= sqrt(numero); i += 2) {
        while (numero % i == 0) {
            fatoresPrimos.push_back(i);
            numero /= i;
        }
    }

    // Se o número restante for maior que 2, ele é um fator primo
    if (numero > 2) {
        fatoresPrimos.push_back(numero);
    }

    return fatoresPrimos;
}

int somaAlgarismos (string number){
    int soma = 0;
    for(int i = 0; i < number.length(); i++){
        //cout << number[i] - '0' << endl;
        soma = soma + (number[i] - '0');
    }
    return soma;
}

/* 
    Número de Smith = Primeiro achar o seus fatores primos, depois verificar se: 
        a soma dos dígitos do número é igual a soma dos dígitos dos seus fatores primos
*/

int main(){
    string number;
    long int number_int;
    int qtd_number;
    cin >> qtd_number;
    long int smith_number;
    vector<long int> fatores ;
    vector<string> fatores_string;
    int soma_number = 0;
    int soma_smith = 0;
    bool verifica_primo;
    while(qtd_number > 0){
        cin >> number;
        number_int = stoi(number);
        while(true){ /* While para encontrar o proximo smith */
            fatores = calcularFatoresPrimos(number_int);
            for (long int fator : fatores) { /*Convertendo fatores para string*/
                fatores_string.push_back(to_string(fator));
                //cout << fator << " ";
            }
            for (string fator : fatores_string){
                soma_smith = soma_smith + somaAlgarismos(fator); /* Calcula a soma dos dígitos dos fatores primos */
                //cout << fator << " ";
            }
            //cout << endl;
            number = to_string(number_int);
            soma_number= somaAlgarismos(number);
            //cout << " Soma: "<< soma_number << endl;
            //cout << " Soma Smith: "<< soma_smith << endl;
            if (soma_number == soma_smith){
                //cout << "É SMITH!" << endl;
                verifica_primo = ehPrimo(number_int);
                if(verifica_primo == false){ 
                    /* Segundo a definição, só é smith se não for primo*/
                    cout << number << endl;
                    break;
                }

            }
            number_int++;
            //cout << number_int << endl;
            fatores.clear();
            fatores_string.clear();
            soma_number = 0;
            soma_smith = 0;

        }
        
        
        qtd_number--;
    }
    return 0;
}