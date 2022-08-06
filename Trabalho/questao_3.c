/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: <Gabriela Silva Rodrigues> e <Marcos Vinicius Vargas Mello>
***************************************************************/
#include <stdio.h>

struct produto{ //Cria a estrutura produto com codigo, quantidade e preco
    int codigo;
    int quantidade;
    float preco;
};

void pProd(struct produto produtos){ //Funcao para imprimir os produtos
    printf("Codigo: %d\n", produtos.codigo);
    printf("Quantidade: %d\n", produtos.quantidade);
    printf("Preco: %.2f", produtos.preco);
}

int main(){
    struct produto produtos[15]; //Cria uma lista com 15 estruturas do tipo produtos

    int var, flag = 0, qnt = 0;
    float media = 0;

    for (int i = 0; i < 15; i++){ //Cria todos os produtos
        printf("Insira o codigo do produto: ");
        scanf("%d", &produtos[i].codigo);
        printf("Insira a quantidade de produtos: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Insira o preço: ");
        scanf("%f", &produtos[i].preco);
    }

    do{ //Faz a pesquisa de produtos ate ser digitado -1
        printf("Insira o codigo do produto: ");
        scanf("%d", &var);

        for(int i = 0; i < 15 && (var != -1); i++){
            if (produtos[i].codigo == var){
                pProd(produtos[i]);

                flag = 1;
            }
        }

        if (!flag && var != -1){ //Se o produto nao existir ou for digitado -1, imprime a mensagem
            printf("Produto desconhecido!\n");
        }

        flag = 0;
    }while(var != -1);

    for(int i = 0; i < 15; i++){ //Imprime todos os produtos que tenham precos maiores que 15
        if (produtos[i].preco > 15){
            pProd(produtos[i]);
        }
    }

    for(int i = 0; i < 15; i++){ //Imprime e soma todos os precos de produtos com preco maior que 10
        if (produtos[i].preco > 10){
            pProd(produtos[i]);

            media += produtos[i].preco;
            qnt++;
        }
    }

    printf("Media dos produtos maiores que RS 10: %.2f\n", (media/(qnt * 1.0))); //Imprime a media dos produtos com preco maior que 10

    return 0;
}