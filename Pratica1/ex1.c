#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("insira as notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    printf("1 - nota = %f", nota1);
    printf("2 - nota = %f", nota2);
    printf("3 - nota = %f", nota3);

    printf("media = %f", media);

    return 0;
}