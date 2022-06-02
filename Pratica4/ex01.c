#include <stdio.h>

float soma (float a, float b){
    return a+b;
}

float subtracao (float a, float b){
    return a-b;
}

float multiplicacao (float a, float b){
    return a*b;
}

float divisao (float a, float b){
    float div = 0;

    if (b == 0){
        printf("ERRO! DIVISÃO POR 0!");
    }
    else{
        div = a/b;
    }

    return div;
}

int main(){
    float a, b;
    int op;

    printf("Insira dois numeros: ");
    scanf("%f %f", &a, &a);

    printf("(1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao)\nInsira a operacao desejada: ");
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("%.2f + %.2f = %.2f\n", a, b, soma(a, b));
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", a, b, subtracao(a, b));
            break;
        case 3:
            printf("%.2f * %.2f = %.2f\n", a, b, multiplicacao(a, b));
            break;
        case 4:
            printf("%.2f / %.2f = %.2f\n", a, b, divisao(a, b));
            break;
        default:
            printf("Operacao invalida!");
    }

    return 0;
}