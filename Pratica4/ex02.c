#include <stdio.h>

float quadrado(float a){
    return a*a;
}

int main(){
    float v[10];

    for (int i = 0; i < 10; i++){
        printf("Insira 10 numeros: ");
        scanf("%f", &v[i]);
    }

    printf("Quadrado dos numeros: \n[");
    for (int i = 0; i < 10; i++){
        printf("%.2f, \n", quadrado(v[i]));
    }
    printf("]\n");

    return 0;
}
