/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Problema do Pedágio
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 23/09/2023
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <algorithm> 
#include <string.h> 
using namespace std;

typedef struct
{
    string license_number;

    int enter; /*  0 = false   1 = true */
    int day;
    int hour;
    int km;

    int exit; /*  0 = false   1 = true */

    int viagens;
}registro;


bool comparePlaca(const registro &a, const registro &b)
{
    return a.license_number < b.license_number;
}

bool compareRegistro(const registro &a, const registro &b)
{
    if (a.license_number != b.license_number) {
        return a.license_number < b.license_number;
    }

    // Se os license_numbers forem iguais, compare pelo day
    if (a.day != b.day) {
        return a.day < b.day;
    }

    // Se os days forem iguais, compare pelo hour
    return a.hour < b.hour;
}

/* Função caso queira ver os registros analizados */
void imprime_Registros(int index, registro * registros){
    cout << "-----Registros-------"<< endl;
        for(int i = 0; i < index; i++){
            cout << registros[i].license_number << " day:" << registros[i].day << " hora:" << registros[i].hour  << " km" << registros[i].km;
            if(registros[i].enter == 1){
                cout << " enter"<<  endl;
            }else if (registros[i].exit == 1){
                cout << " exit"<<  endl;
            }
        }
}


int main(){
    int number_of_cases;
    scanf("%d\n",&number_of_cases);
    int values_moth[24];
    registro registros[1000];
    int index = 0;

    /* Variáveis para leitura*/
    string line;
    string veiculo, status, data;
    string mes, dia, hora, minuto;
    int km;

    while(number_of_cases > 0){
        /* Inicializando a struct */
        for(int i = 0; i < 1000; i++){
            registros[i].license_number = "";
            registros[i].enter = 0;
            registros[i].day = 0;
            registros[i].hour = 0;
            registros[i].km = 0;

            registros[i].exit = 0;

            registros[i].viagens = 0;
        }

        /* Obtendo os valores da hora do mês */
        for(int i = 0; i < 24; i++){
            cin >> values_moth[i];
        }
        scanf("\n");
        while(getline(cin, line)){

            if(line.length() == 0){
                break;
            }else{
                istringstream iss(line);
                iss >> veiculo;
                iss >> data;
                iss >> status;
                iss >> km;

                istringstream liss(data);
                getline(liss, mes, ':');
                getline(liss, dia, ':');
                getline(liss, hora, ':');
                getline(liss, minuto);

                registros[index].license_number = veiculo;
                /* Adicionando na struct*/
                if(status == "enter"){
                    registros[index].enter = 1;

                }else if(status == "exit"){
                    registros[index].exit = 1;
                }
                registros[index].day = stoi(dia);
                registros[index].hour = stoi(hora);
                registros[index].km = km;
                index++;  
            }          
        }
        /* Cálculo do total a pagar por carro */
        //cout << index << endl;
        int total_pagar = 0,qtd_viagens = 0, total_km = 0,valor_km = 0;
        string placa_anterior = "";
        sort(registros, registros + index, compareRegistro);
        placa_anterior = registros[0].license_number;
        for(int i = 0; i < index; i++){
            if (placa_anterior != registros[i].license_number && qtd_viagens > 0 ){
                /* Imprimindo o Relatório do valor a ser pago por carro */
                total_pagar =  ( valor_km + (qtd_viagens * 100) + 200 );
                cout <<placa_anterior << " $" ;
                printf("%.2f\n", (double)total_pagar / 100);
                placa_anterior = registros[i].license_number;
                qtd_viagens = 0,total_km = 0,total_pagar = 0,valor_km = 0;
            }else if(placa_anterior != registros[i].license_number && qtd_viagens == 0){
                placa_anterior = registros[i].license_number;
            }
            if( registros[i].enter == 1 && registros[i+1].exit ==1 && registros[i].license_number == registros[i+1].license_number){
                /* O valor total a pagar = valor naquela hora * total km + (qtd_viagens * 100) + 200 */
                qtd_viagens++;
                total_km = registros[i+1].km - registros[i].km; //Calculando a distancia percorrida
                if(total_km < 0){
                    total_km = total_km * (-1);
                }
                valor_km = valor_km + (values_moth[registros[i].hour] * total_km); //Calculando o valor dessa distancia e multiplicando pelo valor / km

            }
        }
        if (qtd_viagens > 0)
        {
            /* Condicional para caso seja o último carro analizado */
            total_pagar =  ( valor_km + (qtd_viagens * 100) + 200 );
            cout <<placa_anterior << " $" ;
            printf("%.2f\n",(double)total_pagar / 100);
        }
        

        index = 0;
        number_of_cases--;
        cout << endl;
        /*
        if(number_of_cases > 0){
            cout << endl;
        }*/
    }
    return 0;
}