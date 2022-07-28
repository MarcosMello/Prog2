#include <stdio.h>

struct funcionario{
    int mat;
    char nome[30];
    int dia_a;
    int mes_a;
    int ano_a;
    float salario;
};

struct hoje{
    int dia;
    int mes;
    int ano;
};

void pFnc(struct funcionario funcionarios){
    printf("Matricula do funcionário: %d\n", funcionarios.mat);
    printf("Nome do funcionário: %s", funcionarios.nome);
    printf("Dia de admissão: %d\n", funcionarios.dia_a);
    printf("Mes de admissão: %d\n", funcionarios.mes_a);
    printf("Ano de admissão: %d\n", funcionarios.ano_a);
    printf("Salario: %.2f\n", funcionarios.salario);
}

int main(){
    struct funcionario funcionarios[10];

    struct hoje data;
    data.dia = 15;
    data.mes = 03;
    data.ano = 2022;

    int var, flag = 0;
    float salario = 0;

    for(int i = 0; i < 10; i++){
        printf("Insira a matricula: ");
        scanf("%d", &funcionarios[i].mat);

        getchar();

        printf("Insira o nome: ");
        fgets(funcionarios[i].nome, 29, stdin);

        do{
            printf("Insira o dia da admissao: ");
            scanf("%d", &funcionarios[i].dia_a);
        }while(funcionarios[i].dia_a < 1 || funcionarios[i].dia_a > 31);

        do{
            printf("Insira o mes da admissao: ");
            scanf("%d", &funcionarios[i].mes_a);
        }while(funcionarios[i].mes_a < 1 || funcionarios[i].mes_a > 12);

        printf("Insira o ano da admissao: ");
        scanf("%d", &funcionarios[i].ano_a);

        do{
            printf("Insira o salario: ");
            scanf("%f", &funcionarios[i].salario);
        }while(funcionarios[i].salario == 0);
    }

    do{
        printf("Insira a matricula do funcionario: ");
        scanf("%d", &var);

        for(int i = 0; i < 10 && (var != -1); i++){
            if (funcionarios[i].mat == var){
                pFnc(funcionarios[i]);

                flag = 1;
            }
        }

        if (!flag && var != -1){
            printf("Funcionario desconhecido!\n");
        }

        flag = 0;
    }while(var != -1);

    for (int i = 0; i < 10; i++){
        if (funcionarios[i].ano_a == data.ano){
            if (funcionarios[i].mes_a <= data.mes){
                if(funcionarios[i].dia_a <= data.dia){
                    pFnc(funcionarios[i]);
                }
            }
        }
        else if(funcionarios[i].ano_a == (data.ano - 1)){
            pFnc(funcionarios[i]);
        }
        else if(funcionarios[i].ano_a == (data.ano - 2)){
            if (funcionarios[i].mes_a >= data.mes){
                if(funcionarios[i].dia_a >= data.dia){
                    pFnc(funcionarios[i]);
                }
            }
        }
    }

    for (int i = 0; i < 10; i++){
        salario += funcionarios[i].salario;
    }

    printf("Media salarial: %.2f", (salario/10.0));

    return 0;
}