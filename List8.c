#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ex1(){}
void ex2(){}
void ex3(){}
void ex4(){}
void ex5(){}
void ex6(){}
void ex7(){}
void ex8(){}
void ex9(){}
void ex10(){
    int *v = (int *)calloc(5, sizeof(int));

    if (v == NULL){
        printf("Erro ao alocar memoria\n");
        return (1);
    }

    for (int i = 0; i < 5; i++){
        printf("Insira o valor da posicao %d: ", i);
        scanf("%d", (v + i));

        if (*(v + i) % 2 == 0){
            printf("%p\n", (void *)v);
        }
    }
}
void ex11(){}
void ex12(){}
void ex13(){}
void ex14(){

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
int ex16(int *V, int len, int p){
    if (p == (len - 1)){
        return *(V + p);
    }
    else{
        return *(V + p) + ex16(*V, len, p + 1);
    }
}
int ex17(int n){
    if (n == 1){
        return 1;
    }
    else{
        return pow(n, 3) + ex17(n-1);
    }
}
int ex18(int *V1, int lV1, int *V2, int lV2, int *V3){
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