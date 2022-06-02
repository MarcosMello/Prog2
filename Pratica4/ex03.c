#include <stdio.h>

int metade(float a){
    return a/2;
}

int main(){
    float v[10];

    printf("Insira 10 numeros: ");
    for (int i = 0; i < 10; i++){
        scanf("%f", &v[i]);
    }

    printf("Metade dos numeros: [");
    for (int i = 0; i < 10; i++){
        printf("%.2f, \n", metade(v[i]));
    }
    printf("]\n");

    return 0;
}
