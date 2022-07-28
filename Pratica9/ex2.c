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

    FILE *aAtleta = fopen("atletas.bin", "r+b");

    fread(&atletas, sizeof(struct atleta), 5, aAtleta);

    int mAlt = 0, mId = 0;

    for (int i = 0; i < 5; i++){
        if (atletas[i].altura > atletas[mAlt].altura){
            mAlt = i;
        }
        if (atletas[i].idade > atletas[mId].idade){
            mId = i;
        }
    }

    printf("Mais alto: %s\nMais velho: %s\n", atletas[mAlt].nome, atletas[mId].nome);

    fclose(aAtleta);

    return 0;
}