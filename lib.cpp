#include "lib.h"


float funzione(float numeri[],int n){
    int i=0;
    float f=0;
    float k=0;
    float e=0;

    while(i < n){
        k=f;
        numeri[i]=f;
        i++;
        if(f>k){
            e=f;
        }
    }
    return e;
}

