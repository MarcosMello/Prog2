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
        printf("ERRO! DIVISÃO POR 0!\n");
    }
    else{
        div = a/b;
    }

    return div;
}

int main(){
    float a[2];
    int op;

    for (int i = 0; i < 2; i++){
        printf("Digite um número: ");
        scanf("%f", &a[i]);
    }

    printf("(1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao)\nInsira a operacao desejada: ");
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("%.2f + %.2f = %.2f\n", a[0], a[1], soma(a[0], a[1]));
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", a[0], a[1], subtracao(a[0], a[1]));
            break;
        case 3:
            printf("%.2f * %.2f = %.2f\n", a[0], a[1], multiplicacao(a[0], a[1]));
            break;
        case 4:
            printf("%.2f / %.2f = %.2f\n", a[0], a[1], divisao(a[0], a[1]));
            break;
        default:
            printf("Operacao invalida!");
    }

    return 0;
}