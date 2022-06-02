#include <stdio.h>

float metade(float a){
    return a/2;
}

int main(){
    float v[10];

    for (int i = 0; i < 10; i++){
        printf("Insira 10 numeros: ");
        scanf("%f", &v[i]);
    }

    printf("Metade dos numeros: \n[");
    for (int i = 0; i < 10; i++){
        printf("%.2f, \n", metade(v[i]));
    }
    printf("]\n");

    return 0;
}
