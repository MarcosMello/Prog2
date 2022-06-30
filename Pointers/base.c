#include <stdio.h>
#include <stdlib.h>

void troca (int *p, int *q) {
    int t = *p;
    *p = *q;
    *q = t;
}

int main(){

    int vet[4] = {1, 2, 3, 4};
    int *p = vet;
    int *x = NULL;

    for (int i = 0; i < 4; i++){
        printf("%d", vet[i]);
    }

    printf("\n");

    for (int i = 0; i < 4; i++){
        printf("%d", *(p+i));
    }

    printf("\n");

    if (x == NULL){
        printf("%d", *(p+10));
    }

    printf("\n");

    printf("%p\n", (void *) p);

    int z = 13;
    int* n = &z;

    printf("%p\n", (void *) n);
    printf("%d\n", *n);

    int **y = &n;

    printf("%d\n", **y);
    printf("%p\n", (void *) y);

    int c = **y + z;

    printf("%d\n", c);

    int v1 = 1;
    int v2 = 2;

    printf("%d e %d\n", v1, v2);

    troca(&v1, &v2);

    printf("%d e %d\n", v1, v2);

    int vetor[4];
    int *point = vetor;

    for (int i = 0; i < 4; i++){
        scanf("%d", point + i);
    }

    for (int i = 0; i < 4; i++){
        printf("%d\n", vetor[i]); // ou *(point + i)
    }

    int *np = NULL;
    np = malloc(4 * sizeof(int));

    return 0;

}