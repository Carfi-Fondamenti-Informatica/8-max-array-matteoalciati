#include "lib.h"

float funzione(float numeri[],int n){
    int i=0;
    float f=0;
    float k=0;
    float e=0;

    while(i < n){
        k=f;
        f=numeri[i];
        i++;
        if(f>e){
            e=f;
        }
    }
    return e;
}
