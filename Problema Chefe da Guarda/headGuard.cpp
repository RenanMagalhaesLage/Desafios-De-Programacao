#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
using namespace std;
int main() 
{
    string line;
    int cont = 0;

    while(getline(cin, line) && cont < 15){
        //cout << line << endl;
        char primeiro = line[0];
        int aux = 1;
        for(int i = 1; i < line.length(); i++){
            if(line[i] == primeiro){
                aux++;
            }else{
                cout << aux << primeiro;
                aux = 1;
                primeiro = line[i];
            }
        }
        cout << aux << primeiro;
        cout << endl;
        cont++;
        
    }
    return 0;
}