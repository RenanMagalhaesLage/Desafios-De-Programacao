/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Criptografia
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 04/09/2023
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
using namespace std;

int main() 
{
    string line;
    int numberOfCases;
    char letters[26]; //Vetor com o alfabeto
    char lettersDescript[36] = {'t', 'h', 'e', 'q', 'u', 'i', 'c', 'k','b', 'r','o','w','n','f','o','x', 'j','u','m','p','s', 'o', 'v','e', 'r',
                                't', 'h', 'e', 'l', 'a', 'z', 'y', 'd', 'o', 'g'}; //Vetor com a mensagem que serve para descripitar
    char cripto[26];
    string saveLines[100]; //Vetor que serve para salvar as linhas do arquivo de entrada
    int numberOfLines = 0; 
    string the, quick, brown, fox, jumps, over, th3, lazy, dog;
    int caracterNumber; //Acessa a posição no vetor letters correspondente
    string decode, helpDecode;
    int position, isKey = 0, noSolucion = 0, solucion = 0;
    int space = 0, output = 0;
    scanf("%d\n",&numberOfCases);
    //cout << numberOfCases << endl;
    for(int i = 0; i < 26; i++){
        letters[i] = 97+i;
        //cout << letters[i] << endl;
    }                       

    while(numberOfCases > 0){
        for(int j = 0; j < 26; j++){
            cripto[j] = '0';
        }
        while(getline(cin, line)){
            //cout << line << line.length()<< endl;
            if(line.length() == 0){
                //cout << "blank line" << endl;
                space++;
                break;
            }else{
                istringstream iss(line);
                iss >> the;
                iss >> quick;
                iss >> brown;
                iss >> fox;
                iss >> jumps;
                iss >> over;
                iss >> th3;
                iss >> lazy;
                iss >> dog;
                if(the.length() != 3 || quick.length() != 5 || brown.length() != 5 || fox.length() != 3 || jumps.length() != 5 || over.length() != 4 
                    || th3.length() !=3 || lazy.length() != 4 || dog.length() != 3){
                    //cout << "nao eh a chave" << endl;
                    saveLines[numberOfLines] = line;
                    //cout << line << endl;
                    numberOfLines++;
                }else {
                    saveLines[numberOfLines] = line;
                    numberOfLines++;
                    if(isKey == 0){
                        //cout << "é chave!" << endl;
                            
                        for(int i = 0, x = 0; i < line.length(); i++){
                            caracterNumber = line[i];
                            caracterNumber = caracterNumber - 97;
                            if(caracterNumber == -65){
                                    //cout << " " << endl;
                                    //é espaço
                            }else{
                                if(cripto[caracterNumber] == '0'){
                                    cripto[caracterNumber] = lettersDescript[x];
                                    solucion = 1;
                                }else if (cripto[caracterNumber] != lettersDescript[x]){
                                        /* ERRO - Duas atribuições diferentes para a mesma letra*/
                                    noSolucion = 1;
                                    break;
                                }
                                x++;
                                //cout << cripto[caracterNumber] <<  " " << letters[caracterNumber] << " " << caracterNumber << endl;
                            }
                        }
                        isKey = 1;                        
                    }
                    if(noSolucion == 1){
                        solucion = 0;
                    }else{
                        solucion = 1;
                    }
                    
                }                
            }
            

        }
        //cout << numberOfLines << " " << noSolucion <<" " << solucion<< endl;
        for(int y = 0; y < numberOfLines; y++){
            for(int x = 0; x < saveLines[y].length(); x++){
                helpDecode = saveLines[y];
                position = helpDecode[x];
                position = position - 97;
                if(position == -65){
                    decode = decode + ' ';
                } else{
                    decode = decode + cripto[position];
                }
                //cout << decode[x] << endl;
            }
            if(solucion == 1){
                cout << decode << endl;
                output = 1;
            }else{
                noSolucion = 1;
            }
            decode = "";
        }
        if(noSolucion == 0 && solucion == 0 && numberOfLines == 0 && space > 2 ){ //Tratando espaços em branco
            space=0;
            noSolucion = 1;
        }
        if(noSolucion == 1 ){
            cout << "No solution." <<endl;
            output = 1;
        }

        if(output == 1){
            output = 0;
            numberOfCases--;
            decode = "";      
            numberOfLines = 0;
            isKey = 0;
            noSolucion = 0; 
            solucion = 0;
            cout << endl;   
        }
     

    }

    return 0;
}