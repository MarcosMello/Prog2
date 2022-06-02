#include <stdio.h>

int quadrado(float a){
    return a*a;
}

int main(){
    float v[10];

    printf("Insira 10 numeros: ");
    for (int i = 0; i < 10; i++){
        scanf("%f", &v[i]);
    }

    printf("Quadrado dos numeros: [");
    for (int i = 0; i < 10; i++){
        printf("%.2f, \n", quadrado(v[i]));
    }
    printf("]\n");

    return 0;
}
