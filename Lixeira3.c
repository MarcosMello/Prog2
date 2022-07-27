#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 0, menor[2] = {0, 0}, aux;

    printf("Tamanho: ");
    scanf("%d", &size);

    int **M = (int **)calloc(size, sizeof(int *));

    if(M == NULL){
        printf("ERRO!\n");
        return (1);
    }

    for (int i = 0; i < size; i++){
        *(M + i) = (int *)calloc(size, sizeof(int));

        if (*(M + i) == NULL){
            printf("ERRO!\n");
            return(1);
        }
    }

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("Insira o inteiro: ");
            scanf("%d", (*(M + i) + j));
        }
    }

    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            menor[0] = i;
            menor[1] = j;
            for(int k = i; k < size; k++){
                for(int l = j; l < size; l++){
                    if (M[menor[0]][menor[1]] > M[k][l]){
                        menor[0] = k;
                        menor[1] = l;
                    }
                }
            }

            aux = M[menor[0]][menor[1]];
            M[menor[0]][menor[1]] = M[i][j];
            M[i][j] = aux;
        }
    }

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%d ", *(*(M+i)+j));
        }
        printf("\n");
    }

    return 0;
}