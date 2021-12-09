#include <iostream>

using namespace std;

#include "lib.h"


int main() {
    float d=0;
    int i=0;
    float b=0;
    int c=0;
    int n=0;
    int h=0;
    cin >> n;

    float numeri [n];


    while (i<n){
        c=b;
        cin >> b;
        numeri[i]=b;
        i++;
    }


    funzione(numeri, n);


    cout << funzione(numeri, n) ;
    return 0;
}
