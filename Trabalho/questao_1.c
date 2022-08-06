/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: <Gabriela Silva Rodrigues> e <Marcos Vinicius Vargas Mello>
***************************************************************/
#include <stdio.h>

struct livro{ //Cria a estrutura livro com codigo, nome do autor, livro, editora, codigo da area e quantidade de paginas
    int cod;
    char nome_a[30];
    char nome_l[30];
    char editora[15];
    int cod_a;
    int pag;
};

int main(){
    struct livro livros[15]; // Cria uma lista com 15 estruturas de livros

    int var, flag = 0, qnt = 0;

    for(int i = 0; i < 15; i++){ //Pede as informacoes de todos os livros
        do{
            printf("Insira o codigo do livro: ");
            scanf("%d", &livros[i].cod);
        }while(livros[i].cod <= 0);

        getchar();

        printf("Insira o nome do autor: ");
        fgets(livros[i].nome_a, 29, stdin);

        printf("Insira o nome do livro: ");
        fgets(livros[i].nome_l, 29, stdin);

        printf("Insira o nome da editora: ");
        fgets(livros[i].editora, 14, stdin);

        do{
            printf("(1 - Ciencias exatas, 2 - Ciencias humanas, 3 - Ciencias biomedicas)\nInsira o codigo da area: ");
            scanf("%d", &livros[i].cod_a);
        }while(livros[i].cod_a < 1 || livros[i].cod_a > 3); //Verifica se o codigo esta dentre os possiveis

        printf("Insira o numero de paginas: ");
        scanf("%d", &livros[i].pag);
    }

    do{ //Roda a pesquisa de livros ate ser digitado -1
        printf("Insira o codigo para buscar o livro: ");
        scanf("%d", &var);

        for(int i = 0; i < 15 && (var != -1); i++){ //Busca na lista o codigo informado. (Caso o valor informado seja -1 -valor de saida- ele nao faz a pesquisa)
            if (livros[i].cod == var){
                printf("Codigo do Livro: %d\n", livros[i].cod);
                printf("Nome do Autor: %s", livros[i].nome_a);
                printf("Nome do Livro: %s", livros[i].nome_l);
                printf("Editora: %s", livros[i].editora);
                printf("Codigo da Area: %d\n", livros[i].cod_a);
                printf("Numero de paginas: %d\n", livros[i].pag);

                flag = 1;
            }
        }

        if (!flag && var != -1){ //Caso o valor nao tenha sido encontrado e nao seja -1 esse livro nao existe
            printf("Livro desconhecido!\n");
        }

        flag = 0;
    }while(var != -1);

    for (int i = 0; i < 15; i++){ //Verifica os livros que tem paginas >= 100 e <= 300
        if (livros[i].pag >= 100 && livros[i].pag <= 300){
            qnt++;
        }
    }

    printf("Quantidade de livros entre 100 e 300 paginas (inclusive): %d", qnt);

    return 0;
}