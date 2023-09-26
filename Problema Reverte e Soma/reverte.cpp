/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Problema Reverte e Soma
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 25/09/2023
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <algorithm> 
#include <string.h> 
using namespace std;

long int reverte_number (long int number){
    long int resto = 0, parte_div = 0, save_number = number;
    int i = 1, cont = 0; 
    while(number != 0){
        number = number / 10;
        cont++;
    }
    //cout << " Cont:" << cont << endl;
    cont--;
    while(cont > 0){
        i = i * 10;
        cont--;
    }
    //cout << " i:" << i << endl;

    do{
        resto = save_number % 10;
        //cout << " Resto:" << resto << endl;
        parte_div = parte_div + (resto * i);
        //cout << " parte_div:" << parte_div << endl;
        save_number = save_number / 10;
        i = i  / 10;
    }while(save_number != 0);
    return parte_div;
}

int main(){
    long int numbers;
    scanf("%ld\n",&numbers);
    long int number, number_reverse, qtd_soma, soma_numbers, verifica=0;

    while(numbers > 0){
        qtd_soma = 0;
        cin >> number;
        //cout << number << endl;
        number_reverse = reverte_number(number);
        if(number_reverse == number){   //Verificando se o número dado já é palindromo
            qtd_soma++;        
            number = number_reverse + number;
            number_reverse = reverte_number(number);
            if(number_reverse == number){
                cout << qtd_soma << " " << number << endl;
                verifica = 1;
            }
        }
        //cout << number_reverse << endl;
        while(verifica == 0){
            number = number_reverse + number; 
            number_reverse = reverte_number(number);
            //cout << number_reverse << endl;
            qtd_soma++;
            if(number_reverse == number){           
                cout << qtd_soma << " " << number << endl;
                verifica = 1;
            }
            
        }
        numbers--;
        verifica = 0;
    }
    return 0;
}