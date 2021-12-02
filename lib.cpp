//
// Created by Alex Fragalà on 01/12/21.
//

#include <iostream>
#include "lib.h"

void numprimo(int a, int i, int &conta){
    int div=0;
    i++;
    if(a>1 and a>i){
        div = a%i;
        if(div==0){
            conta++;
        }else{
            numprimo(a,i, conta);
        }
    }
}
