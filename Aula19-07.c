#include <stdio.h>
#include <stdlib.h>

struct cadastro{
    char nome[30];
    int mat;
    float sb;
};

struct funcionario{
    struct cadastro cad;
    float sl;
    float dINSS;
};

int main(){
    struct funcionario funcionarios[80];

    float media = 0;

    for (int i = 0; i < 80; i++){
        printf("Nome: ");
        fgets(funcionarios[i].cad.nome, 29, stdin);
        printf("Matricula: ");
        scanf("%d", &funcionarios[i].cad.mat);
        printf("Salario bruto: ");
        scanf("%f", &funcionarios[i].cad.sb);

        funcionarios[i].dINSS = funcionarios[i].cad.sb * 0.12;
        funcionarios[i].sl = funcionarios[i].cad.sb - funcionarios[i].dINSS;

        media += funcionarios[i].cad.sb;
    }

    media /= 3.0;

    for (int i = 0; i < 80; i++){
        printf("Nome: %s\n", funcionarios[i].cad.nome);
        printf("Matricula: %d\n", funcionarios[i].cad.mat);
        printf("Salario bruto: %.2f\n", funcionarios[i].cad.sb);
    }
}