#include <stdio.h>

struct produto{
    int codigo;
    int quantidade;
    float preco;
};

void pProd(struct produto produtos){
    printf("Codigo: %d\n", produtos.codigo);
    printf("Quantidade: %d\n", produtos.quantidade);
    printf("Preco: %.2f", produtos.preco);
}

int main(){
    struct produto produtos[15];

    int var, flag = 0, qnt = 0;
    float media = 0;

    for (int i = 0; i < 15; i++){
        printf("Insira o codigo do produto: ");
        scanf("%d", &produtos[i].codigo);
        printf("Insira a quantidade de produtos: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Insira o preço: ");
        scanf("%f", &produtos[i].preco);
    }

    do{
        printf("Insira o codigo do produto: ");
        scanf("%d", &var);

        for(int i = 0; i < 15 && (var != -1); i++){
            if (produtos[i].codigo == var){
                pProd(produtos[i]);

                flag = 1;
            }
        }

        if (!flag && var != -1){
            printf("Funcionario desconhecido!\n");
        }

        flag = 0;
    }while(var != -1);

    for(int i = 0; i < 15; i++){
        if (produtos[i].preco > 15){
            pProd(produtos[i]);
        }
    }

    for(int i = 0; i < 15; i++){
        if (produtos[i].preco > 10){
            pProd(produtos[i]);

            media += produtos[i].preco;
            qnt++;
        }
    }

    printf("Media dos produtos maiores que RS 10: %.2f\n", (media/(qnt * 1.0)));

    return 0;
}