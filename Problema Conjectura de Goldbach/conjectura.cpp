#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main() 
{
    int n;
    int numero;
    int cause[16000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int count = 0;
        
        scanf("%d", &numero);
        for(int i = 1; i < (numero/2)+1; i++){
            if(isPrime(i) && isPrime(numero-i)){
                cause[count] = i;
                count++;
            }
        }
        cout << numero << " has " << count << " representation(s)" << endl;
        for(int i = 0; i < count; i++){
            cout << cause[i] << "+" << numero - cause[i] << endl;
        }
        cout << endl;
    }
    return 0;
}