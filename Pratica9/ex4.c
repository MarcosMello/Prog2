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

    FILE *arq = fopen("pessoa.bin", "r+b");

    fread(&uPessoa, sizeof(struct pessoa), 1, arq);

    printf("Nome: %s", uPessoa.nome);
    printf("Pais: %s", uPessoa.endereco1.pais);
    printf("Estado: %s", uPessoa.endereco1.estado);
    printf("Cidade: %s", uPessoa.endereco1.cidade);
    printf("Bairro: %s", uPessoa.endereco1.bairro);
    printf("Rua: %s", uPessoa.endereco1.rua);
    printf("Edificio: %d\n", uPessoa.endereco1.ed);
    printf("Apartamento: %d\n", uPessoa.endereco1.ap);

    fclose(arq);

    return 0;
}