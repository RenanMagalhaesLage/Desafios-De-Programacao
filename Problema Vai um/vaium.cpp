/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Problema Vai Um
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

int main(){
    int number_One, number_Two;
    string number_A, number_B;
    int qtd_carry, carry;
    int tam_A = 0, tam_B=0;
    char vetor_A[10], vetor_B[10];
    int soma = 0;
    scanf("%d %d\n",&number_One, &number_Two);
    while (!(number_One == 0 && number_Two == 0))
    {
        qtd_carry = 0;
        carry = 0;
        number_A = to_string(number_One);
        number_B = to_string(number_Two);
        tam_A = number_A.length();
        tam_B = number_B.length();

        /* Preenchendo o vetor com zeros */
        for(int i = 0; i < 10; i++){
            vetor_A[i] = '0';
            vetor_B[i] = '0';
        }

        /* Colocando os valores dos números nos vetores */
        for(int j = tam_A-1, i = 9; j >= 0; j--, i--){
            vetor_A[i] = number_A[j];
        }
        for(int j = tam_B-1, i = 9; j >= 0; j--, i--){
            vetor_B[i] = number_B[j];
        }


        for(int i = 9; i > 0 ; i--){
            soma = (vetor_A[i] - '0') + (vetor_B[i]- '0');
            if((soma + carry) >=10){
                qtd_carry++;
                carry++;
            }else if ((soma + carry) <10){
                carry = 0;
            }
            if(carry > 1){
                carry = 1;
            }
            //cout << "vai um "<< vetor_A[i] << " + " << vetor_B[i]<< " = "<< soma << " carry = "<< carry<< endl;
            soma = 0;
        }
        /*
        for(int i = 9; tam_A > 1 && tam_B > 1 ; i--, tam_A--, tam_B--){
            cout << tam_A << " " << tam_B << endl;
            soma = (vetor_A[i] - '0') + (vetor_B[i]- '0');
            if((soma + qtd_carry) >=10){
                qtd_carry++;
                cout << "vai um" << endl;
            }
            soma = 0;
        }*/
        if(qtd_carry == 0){
            cout << "No carry operation." << endl;
        }else if (qtd_carry == 1){
            cout << qtd_carry << " carry operation." << endl;
        }else{
            cout << qtd_carry << " carry operations." << endl;
        }
        scanf("%d %d\n",&number_One, &number_Two);
    }
    
    return 0;
}