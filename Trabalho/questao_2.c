/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: <Gabriela Silva Rodrigues> e <Marcos Vinicius Vargas Mello>
***************************************************************/
#include <stdio.h>

struct funcionario{ //Cria a estrutura do funcionario com matricula, nome, dia/mes/ano de contratacao e o salario.
    int mat;
    char nome[30];
    int dia_a;
    int mes_a;
    int ano_a;
    float salario;
};

struct hoje{ //Estrutura para o dia da consulta
    int dia;
    int mes;
    int ano;
};

void pFnc(struct funcionario funcionarios){ //Funcao para imprimir os funcionarios
    printf("Matricula do funcionário: %d\n", funcionarios.mat);
    printf("Nome do funcionário: %s", funcionarios.nome);
    printf("Dia de admissão: %d\n", funcionarios.dia_a);
    printf("Mes de admissão: %d\n", funcionarios.mes_a);
    printf("Ano de admissão: %d\n", funcionarios.ano_a);
    printf("Salario: %.2f\n", funcionarios.salario);
}

int main(){
    struct funcionario funcionarios[10]; //Cria uma lista com 10 estruturas do tipo funcionario

    struct hoje data; //Cria uma estrutura para a data

    int var, flag = 0;
    float salario = 0;

    for(int i = 0; i < 10; i++){ //Preenche todos os funcionarios
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

    do{ //Pesquisa os funcionarios ate ser digitado -1
        printf("Insira a matricula do funcionario: ");
        scanf("%d", &var);

        for(int i = 0; i < 10 && (var != -1); i++){
            if (funcionarios[i].mat == var){
                pFnc(funcionarios[i]);

                flag = 1;
            }
        }

        if (!flag && var != -1){ //Caso o funcionario nao tenha sido encontrado e nao seja -1 esse livro nao existe
            printf("Funcionario desconhecido!\n");
        }

        flag = 0;
    }while(var != -1);

    printf("Insira o dia, mes e ano separados por um espaço para pesquisar: "); //Pede a data
    scanf("%d %d %d", &data.dia, &data.mes, &data.ano);

    for (int i = 0; i < 10; i++){
        if (funcionarios[i].ano_a == data.ano){
            if (funcionarios[i].mes_a <= data.mes){
                if(funcionarios[i].dia_a <= data.dia){ //Procura funcionarios na data anterior a atual
                    pFnc(funcionarios[i]);
                }
            }
        }
        else if(funcionarios[i].ano_a == (data.ano - 1)){ //Procura funcionarios no ano anterior ao atual (aceita todos)
            pFnc(funcionarios[i]);
        }
        else if(funcionarios[i].ano_a == (data.ano - 2)){
            if (funcionarios[i].mes_a >= data.mes){
                if(funcionarios[i].dia_a >= data.dia){ //Procura no ano -2 do ano anterior. (Aceita todos depois do dia/mes atual)
                    pFnc(funcionarios[i]);
                }
            }
        }
    }

    for (int i = 0; i < 10; i++){ //Soma todos os salarios para fazer a media
        salario += funcionarios[i].salario;
    }

    printf("Media salarial: %.2f", (salario/10.0)); //Media

    return 0;
}