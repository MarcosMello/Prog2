#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float MEDIA(float X, float Y, float Z){
    return ((X + Y + Z) / 3.0);
}

int main(){
    int qnt = 0;
    char **nomes = NULL, aux[30];
    float *media = NULL, X, Y, Z;

    do{
        printf("Insira o nome: ");
        fgets(aux, 30, stdin);

        if (strcmp(aux, "FIM\n") != 0){
            char *nome = (char *)malloc(strlen(aux) * (sizeof(char)));

            if (nome == NULL){
                printf("Falta de memoria!");
                return (1);
            }

            strcpy(nome, aux);

            qnt++;
            nomes = (char **)realloc(nomes, qnt * sizeof(char *));

            if (nome == NULL){
                printf("Falta de memoria!");
                return (1);
            }

            *(nomes + (qnt - 1)) = nome;

            printf("Insira as notas: ");
            scanf("%f %f %f", &X, &Y, &Z);
            getchar();

            media = (float *)realloc(media, qnt * sizeof(float));

            if (media == NULL){
                printf("Falta de memoria!");
                return (1);
            }

            *(media + (qnt - 1)) = MEDIA(X, Y, Z);
        }
    }while(strcmp(aux, "FIM\n") != 0);

    for (int i = 0; i < qnt; i++){
        printf("Nome: %sMedia: %.2f\n", *(nomes + i), *(media + i));
    }

    return 0;
}