#include <stdio.h>

struct atleta{
    char nome[30];
    char esporte[30];
    int idade;
    float altura;
};

int main(){
    struct atleta atletas[5];

    FILE *aAtleta = fopen("atletas.bin", "w+");

    for (int i = 0; i < 5; i++){
        printf("Nome: ");
        fgets(atletas[i].nome, 29, stdin);

        printf("Esporte: ");
        fgets(atletas[i].esporte, 29, stdin);

        printf("Idade: ");
        scanf("%d", &atletas[i].idade);
        getchar();

        printf("Altura: ");
        scanf("%f", &atletas[i].altura);
        getchar();
    }

    fwrite(&atletas, sizeof(struct atleta), 5, aAtleta);
}