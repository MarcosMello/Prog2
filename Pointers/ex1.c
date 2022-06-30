#include <stdio.h>
#include <stdlib.h>

int soma(int (*p)[4], int col, int ind){
    int soma = 0;

    for (int i = 0; i < col; i++){
        soma += *(*(p+ind)+i);
    }

    return soma;
}

int soma1(int (*p)[4], int lin, int ind){
    int soma = 0;

    for (int i = 0; i < lin; i++){
        soma += *(*(p+i)+ind);
    }

    return soma;
}

int main(){
    int vet[2][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8}};

    int (*p)[4];
    p = vet;

    printf("%d\n", soma(p, 4, 1));
    printf("%d\n", soma1(p, 2, 2));

    return 0;
}