#include <stdio.h>
#include <stdlib.h>

int main(){
    int menor[2] = {0,0}, aux = 0;
    int **M = (int **)calloc(2, sizeof(int *));

    for (int i = 0; i < 2; i++){
        *(M+i) = (int *)calloc(2, sizeof(int));
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Insira o valor da posicao %d %d: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%d ", *(*(M+i)+j));
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++){
        menor[0] = i/2;
        menor[1] = i - (2 * menor[0]);
        for (int j = i; j < 4; j++){
            if (*(*(M + menor[0]) + menor[1]) > *(*(M + (j/2)) + (j - (2 * (j/2))))){
                menor[0] = j/2;
                menor[1] = j - (2 * (j/2));
            }
        }

        if (menor[0] != (i/2) && menor[1] != (i - (2 * (i/2)))){
            aux = *(*(M + menor[0]) + menor[1]);
            *(*(M + menor[0]) + menor[1]) = *(*(M + (i/2)) + (i - (2 * (i/2)))); //M[menor[0]][menor[1]]
            *(*(M + (i/2)) + (i - (2 * (i/2)))) = aux;
        }
    }

    printf("\n");

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%d ", *(*(M+i)+j));
        }
        printf("\n");
    }

    return 0;
}