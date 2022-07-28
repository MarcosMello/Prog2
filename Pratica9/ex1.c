#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct atleta{
    char nome[30];
    char esporte[30];
    int idade;
    float altura;
};

int main(){
    struct atleta atletas[5];

    FILE *aAtleta = fopen("atletas.bin", "w+b");

    for (int i = 0; i < 5; i++){
        printf("Nome: ");
        fgets(atletas[i].nome, 29, stdin);
        atletas[i].nome[strlen(atletas[i].nome) - 1] = ' ';

        printf("Esporte: ");
        fgets(atletas[i].esporte, 29, stdin);
        atletas[i].esporte[strlen(atletas[i].esporte) - 1] = ' ';

        printf("Idade: ");
        scanf("%d", &atletas[i].idade);
        getchar();

        printf("Altura: ");
        scanf("%f", &atletas[i].altura);
        getchar();
    }

    fwrite(&atletas, sizeof(struct atleta), 5, aAtleta);

    fclose(aAtleta);

    return 0;
}