#include <stdio.h>

void display(int num[10]); //protótipo da função

void display(int num[]){ //int num [10]; int num []; int *num; int num[30]; int num[5]; //nada mudou
    int i;
    for(i=0; i<10; i++){
        printf("%d ",num[i]);
    }
}

int main(){
    int t[10], i;

    for(i=0; i<10; i++){
        t[i] = i;
    }

    display(t);
    return 0;
}