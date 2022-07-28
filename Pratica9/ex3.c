#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct endereco{
    char pais[30];
    char estado[30];
    char cidade[30];
    char bairro[30];
    char rua[60];
    int ed;
    int ap;
};

struct pessoa{
    char nome[30];
    struct endereco endereco1;
};

int main(){
    struct pessoa uPessoa;

    FILE *arq = fopen("pessoa.bin", "w+b");

    printf("Nome: ");
    fgets(uPessoa.nome, 29, stdin);
    printf("Pais: ");
    fgets(uPessoa.endereco1.pais, 29, stdin);
    printf("Estado: ");
    fgets(uPessoa.endereco1.estado, 29, stdin);
    printf("Cidade: ");
    fgets(uPessoa.endereco1.cidade, 29, stdin);
    printf("Bairro: ");
    fgets(uPessoa.endereco1.bairro, 29, stdin);
    printf("Rua: ");
    fgets(uPessoa.endereco1.rua, 59, stdin);
    printf("Edificio: ");
    scanf("%d", &uPessoa.endereco1.ed);
    printf("Apartamento: ");
    scanf("%d", &uPessoa.endereco1.ap);

    fwrite(&uPessoa, sizeof(struct pessoa), 1, arq);

    fclose(arq);

    return 0;
}