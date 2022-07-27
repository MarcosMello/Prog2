#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define VSIZE(x) (sizeof(x) / sizeof((x)[0])) // Macro para calcular o tamanho de um vetor criado estaticamente

int ex16(int *V, size_t len){
    if (len == 1){
        return *(V + (len-1));
    }
    else{
        return *(V + (len-1)) + ex16(V, len-1);
    }
}

int ex17(int n){
    if (n == 1){
        return 1;
    }
    else{
        return (pow(n, 3)) + ex17(n-1);
    }
}

int ex18(float *V1, int lV1, float *V2, int lV2, float *V3){
    if (lV1 != lV2){
        return 0;
    }
    else{
        for (int i = 0; i < lV1; i++){
            *(V3 + i) = *(V1 + i) + *(V2 + i);
        }
        return 1;
    }
}

void ex15F(int *V, int n, int p){
    if (p == 0){
        *(V) = 1;
    }
    else if (p == 1 && n != 1){
        *(V + 1) = 1;
    }
    else if (p != n){
        *(V + p) = *(V + (p - 1)) + *(V + (p - 2));
    }
    else{
        return;
    }

    return ex15F(V, n, p + 1);
}

int ex15E(int n){
    if (n == 1){
        return 1;
    }
    else{
        return n * ex15E(n - 1);
    }
}

int main(){
    // int V[10] = {1,2,3,4,5,6,7,8,9,10};
    // int size = 0;

    // int soma = ex16(V, VSIZE(V));
    // printf("%d\n", soma);

    // printf("Insira o tamanho do vetor: ");
    // scanf("%d", &size);

    // int *V2 = (int *)calloc(size, sizeof(int));

    // if (V2 == NULL){
    //     printf("Erro ao alocar memoria\n");
    //     return 1;
    // }

    // for (int i = 0; i < size; i++){
    //     printf("Insira o valor da posicao %d: ", i);
    //     scanf("%d", (V2 + i));
    // }

    // int soma2 = ex16(V2, size);
    // printf("%d\n", soma2);

    // free(V2);

    // int n = 0;
    // printf("Insira o valor de n: ");
    // scanf("%d", &n);

    // int cubo = ex17(n);
    // printf("%d\n", cubo);

    // int t1, t2;

    // printf("Insira o tamanho do vetor 1: ");
    // scanf("%d", &t1);

    // printf("Insira o tamanho do vetor 2: ");
    // scanf("%d", &t2);

    // float *V1 = (float *)calloc(t1, sizeof(float));

    // if (V1 == NULL){
    //     printf("Erro ao alocar memoria\n");
    //     return (1);
    // }

    // float *V2 = (float *)calloc(t2, sizeof(float));

    // if (V2 == NULL){
    //     printf("Erro ao alocar memoria\n");
    //     return (1);
    // }

    // float *V3 = (float *)calloc(t1, sizeof(float));

    // for (int i = 0; i < t1; i++){
    //     printf("V1 - Insira o valor da posicao %d: ", i);
    //     scanf("%f", (V1 + i));
    // }

    // for (int i = 0; i < t2; i++){
    //     printf("V2 - Insira o valor da posicao %d: ", i);
    //     scanf("%f", (V2 + i));
    // }

    // int sus = ex18(V1, t1, V2, t2, V3);

    // (sus == 0) ? printf("Erro ao somar os vetores\n") : printf("Vetores somados\n");

    // for (int i = 0; i < t1 && sus == 1; i++){
    //     printf("%.2f\n", *(V3 + i));
    // }

    // int *v = (int *)calloc(5, sizeof(int));

    // if (v == NULL){
    //     printf("Erro ao alocar memoria\n");
    //     return (1);
    // }

    // for (int i = 0; i < 5; i++){
    //     printf("Insira o valor da posicao %d: ", i);
    //     scanf("%d", (v + i));

    //     if (*(v + i) % 2 == 0){
    //         printf("%p\n", (void *)v);
    //     }
    // }

    // int size = 0;

    // do{
    //     printf("Insira o n: ");
    //     scanf("%d", &size);
    // } while(size <= 0);

    // int *v = (int *)calloc(size, sizeof(int));

    // ex15F(v, size, 0);

    // for (int i = 0; i < size; i++){
    //     printf("%d ", *(v + i));
    // }

    // printf("\n");

    int n = 0;

    printf("Insira o n: ");
    scanf("%d", &n);

    printf("%d\n", ex15E(n));

    return 0;
}