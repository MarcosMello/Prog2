#include <stdio.h>

int main(){
    int n;
    unsigned long long fnum = 1;
    //usando unsigned long long por que se usasse só int só poderia ter fatorial até 10
    //unsigned = sem sinal para poder aumentar a quantidade de números que a variavel pode suportar;
    //long long tipo que aceita mais números (64 bits)

    do{
        printf("Insira o numero inteiro e positivo: ");
        scanf("%d", &n);
    }while(n <= 0);

    for (int i = 2; i <= n; i++){
        fnum = fnum * i;
    }

    printf("Fatorial: %llu", fnum);
}