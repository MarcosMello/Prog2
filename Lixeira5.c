#include <stdio.h>
#include <stdlib.h>

int maiorL(float **mat, int m, int n){
    int maior[2] = {0,0};

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (*(*(mat + i) + j) > *(*(mat + maior[0]) + maior[1])){
                maior[0] = i;
                maior[1] = j;
            }
        }
    }

    return (maior[0]);
}

float menorC(float **mat, int L, int n){
    int menor = 0;
    for (int i = 0; i < n; i++){
        if (*(*(mat + L) + i) < *(*(mat + L) + menor)){
            menor = i;
        }
    }

    return (*(*(mat + L) + menor));
}

void imprimeM(float **mat, int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%.2f", *(*(mat+i)+j));
        }
        printf("\n");
    }
}

float **Aloca(int m, int n){
    float **mat = (float **) calloc(m, sizeof(float *));
    if (mat == NULL){
        printf("ERRO! falta memoria");
        exit(1);
    }
    for (int i = 0; i < m; i++){
        *(mat + i) = (float*) calloc(n, sizeof(float));
        if (*(mat + i) == NULL){
            printf("ERRO! falta memoria");
            exit(1);
        }
    }

    return (mat);
}

int main(){
    float **mat = Aloca(3, 3);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Insira o numero: ");
            scanf("%f", (*(mat + i) + j));
        }
    }

    int Lmaior = maiorL(mat, 3, 3);
    float Cmenor = menorC(mat, Lmaior, 3);
    printf("Minimax: %.2f", Cmenor);

    imprimeM(mat, 3, 3);

    return 0;
}