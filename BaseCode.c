#include <stdio.h>

int main(){
    int **M = (int **)calloc(2, sizeof(int *));
    for (int i = 0; i < 2; i++){
        *(M+i) = (int *)calloc(2, sizeof(int));
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Insira o valor da posicao %d %d: ", i, j);
            scanf("%d", (*(M+i)+j));
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%d ", *(*(M+i)+j));
        }
        printf("\n");
    }

    return 0;
}