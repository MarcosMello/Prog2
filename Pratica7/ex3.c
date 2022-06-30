#include <stdio.h>
#include <stdlib.h>

void FlipHorizontal (int **A, int m, int n){
    int aux = 0;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < (n/2); j++){
            aux = *(*(A + i) + j);
            *(*(A + i) + j) = *(*(A + i) + ((n-1) - j));
            *(*(A + i) + ((n-1) - j)) = aux;
        }
    }
}

int main(){
    int m, n;

    printf("Digite a quantidade de linhas e colunas: ");
    scanf("%d %d", &m, &n);

    int **A = calloc(m, sizeof(int *));

    if (A == NULL){
        printf("Erro ao alocar memoria\n");
        return (1);
    }

    for (int i = 0; i < m; i++){
        *(A + i) = calloc(n, sizeof(int));
        if (*(A+i) == NULL){
            printf("Erro ao alocar memoria\n");
            return (1);
        }
    }

    for (int i = 0; i < m; i++){
        printf("Insira os valores para a %d linha: ", i+1);
        for (int j = 0; j < n; j++){
            scanf("%d", (*(A + i) + j));
        }
    }

    printf("\nSua Matriz e:\n");

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", *(*(A + i) + j));
        }
        printf("\n");
    }

    printf("\nSua Matriz invertida horizontalmente e:\n");

    FlipHorizontal(A, m, n);

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", *(*(A + i) + j));
        }
        printf("\n");
    }

    return 0;
}