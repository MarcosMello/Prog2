#include <stdio.h>

int main(){
    int n;
    unsigned long long fact = 1;
    float s = 1;

    do{
        printf("Insira o n inteiro e positivo: ");
        scanf("%d", &n);
    }while(n<0); //Deixei passar o 0 por que acho que quando for 0 s = 1

    for (int i = 1; i <= n; i++){
        for (int j = 2; j <= i; j++){
            fact *= j;
        }
        s += 1.0/fact;
        fact = 1;
    }

    printf("S = %f", s);
}