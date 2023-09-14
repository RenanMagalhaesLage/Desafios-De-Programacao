#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int dado[7];
    int n;
    int participantes[101];
    int maior = 0;

    scanf("%d", &n);
    for (int i = 1; i < (n+1); i++){
        cin >> participantes[i];
    }
    for(int j = 1; j < 7; j++){
        dado[j] = 0;
    }
    for(int j = 1; j < (n+1); j++){
        dado[participantes[j]]++;
    }
    /*
    for(int j = 1; j < 7; j++){
        cout << dado[j] << endl;
    }*/
    for(int j = 7; j > 0; j--){
        if(dado[j] == 1){
            maior = j;
            break;           
        }
    }
    if(maior == 0){
        cout << "none" << endl;
    }else{
        for(int i = 1; i < (n+1); i++){
            if(participantes[i] == maior){
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}