#include "lib.h"
#include <iostream>
using namespace std;

int main(){
    int numero, conta=0;
    cin >> numero;
    numprimo(numero, 1, conta);
    if(conta==0){
        cout << "numero primo" << endl;
    }else{
        cout << "numero non primo" << endl;
    }
    return 0;
}

