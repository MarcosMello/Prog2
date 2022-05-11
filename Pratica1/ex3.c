#include <stdio.h>

int main(){
    char conceito;
    float media;

    printf("insira a media: ");
    scanf("%f", &media);

    if (media >= 9.5) {
        conceito='A';
        printf("Seu conceito é A");
    }
    else if (media >= 8.5){
        conceito='B';
        printf("Seu conceito é B");
    }
    else if (media >= 7.5){
        conceito='C';
        printf("Seu conceito é C");
    }
    else if (media >= 6.5){
        conceito='D';
        printf("Seu conceito é D");
    }
    else if (media >= 5.5){
        conceito='E';
        printf("Seu conceito é E");
    }
    else {
        conceito='R';
        printf("Reprovado");
    }
    return 0;
}