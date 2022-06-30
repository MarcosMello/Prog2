#include <stdio.h>
#include <stdlib.h>

int *histograma(int **A, int m, int n){
    int *hist = calloc(51, sizeof(int));

    if (hist == NULL){
        printf("Erro ao alocar memoria\n");
        return (NULL);
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            *(hist + *(*(A + i) + j)) += 1;
        }
    }

    return (hist);
}

int main(){
    int l, c;
    int *hist = NULL;

    printf("Digite a quantidade de linhas e colunas: ");
    scanf("%d %d", &l, &c);

    int **Mat = (int **)malloc(sizeof(int *) * l);

    if (Mat == NULL){
        printf("Erro ao alocar memoria\n");
        return (1);
    }

    for (int i = 0; i < l; i++){
        Mat[i] = (int *)malloc(sizeof(int) * c);
        if (Mat[i] == NULL){
            printf("Erro ao alocar memoria\n");
            return (1);
        }
    }

    for (int i = 0; i < l; i++){
        printf("Insira os valores para a %d linha: ", i+1);
        for (int j = 0; j < c; j++){
            scanf("%d", (*(Mat + i) + j));
        }
    }

    printf("\nSua Matriz e: \n");

    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf("%d ", *(*(Mat + i) + j));
        }
        printf("\n");
    }

    printf("\nO histograma e:\n");

    hist = histograma(Mat, l, c);

    for (int i = 0; i <= 50; i++){
        printf("%d ", *(hist + i));
    }
    printf("\n");

    return 0;
}