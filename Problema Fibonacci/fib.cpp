#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Função para somar dois números grandes representados como strings
string somarNumerosGrandes(string num1, string num2) {
    int carry = 0;
    string resultado = "";

    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int d1 = (i >= 0) ? num1[i] - '0' : 0;
        int d2 = (j >= 0) ? num2[j] - '0' : 0;

        int soma = d1 + d2 + carry;
        carry = soma / 10;
        int digito = soma % 10;

        resultado = char('0' + digito) + resultado;

        if (i >= 0) i--;
        if (j >= 0) j--;
    }

    return resultado;
}


// Função para calcular os primeiros n números de Fibonacci e armazená-los em um vetor de strings
vector<string> calcularFibonacci(int n) {
    vector<string> fibonacci;
    fibonacci.push_back("1");
    if (n == 1) return fibonacci;

    fibonacci.push_back("2");
    if (n == 2) return fibonacci;

    for (int i = 2; i < n; i++) {
        string proximo = somarNumerosGrandes(fibonacci[i - 1], fibonacci[i - 2]);
        fibonacci.push_back(proximo);
    }

    return fibonacci;
}
int comparaString (string str1, string str2){
    if(str1 == str2){ //As strings são iguais
        return 3;
    }
    if(str1.length()==str2.length()){ //Possuem o mesmo tamanho
        for(int j = 0; j < str2.length(); j++){
            if(str2[j] > str1[j]){
                return 2; //retorna str2 pois o primeiro elemento é maior
            }else if(str2[j] == str1[j]){
                str2.erase(0, 1);
                str1.erase(0, 1);
                return comparaString(str1, str2);
            }else{
                return 1;
            }
        }
    }else if(str1.length() > str2.length()){
        return 1;
    }else if(str2.length() > str1.length()){
        return 2;
    }

}

int main() {
    
    int n = 500;
    string number_A, number_B ;
    int inicio = 0, fim = 0;
    int verifica = 0;
    int qtd_numeros = 0;
    vector<string> resultado = calcularFibonacci(n);
    /*
    for (int i = 0; i <500 ; i++) {
        cout << "Fibonacci(" << i<< ") = " << resultado[i] << endl;
    }
    abort();*/

/*
    string str1 = "83";
    string str2 = "100";
    int teste = comparaString(str1, str2);
    cout << teste << endl;
    abort();*/


    while(true){
        cin >> number_A;
        cin >> number_B;
        if (number_A == "0" && number_B == "0"){
            break;
        }
    int resposta = 0;
    string compara;
    /* Definindo o intervalo  -- 1° achando o inicio */
        for(int i = 0; i < n; i++){
            resposta = comparaString(number_A,resultado[i]);
            if(resposta > 1){
                inicio = i;
                break;
            }

        }
    /* 2° achando fim*/
        for(int i = 0; i < n; i++){
            resposta = comparaString(number_B,resultado[i]);
            if(resposta == 2){
                fim = i-1;
                break;
            }else if(resposta == 3){
                fim = i;
                break;
            }
        }
        //cout << "inicio: " << inicio << " fim: "<< fim << endl;

        /* Contando quantos números possui no intervalo*/
        for(int i = inicio; i <=fim; i++){
            qtd_numeros++;
        }
        //cout << "Quantidade: "<< qtd_numeros<< endl;
        cout <<  qtd_numeros<< endl;
        verifica = 0;
        /*
        for (int i = inicio; i <=fim ; i++) {
           cout << "Fibonacci(" << i<< ") = " << resultado[i] << endl;
        }*/
        qtd_numeros = 0;
    }  


    return 0;
}
