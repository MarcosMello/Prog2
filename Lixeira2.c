#include <stdio.h>
#include <stdlib.h>

int main(){
    int *num = (int *)calloc(5, sizeof(int));
    int menor, aux;

    if (num == NULL){
        printf("ERRO! Memoria");
        return (1);
    }

    for (int i = 0; i < 5; i++){
        *(num + i) = 5 - i;
    }

    for (int i = 0; i < 5; i++){
        menor = i;
        for (int j = i; j < 5; j++){
            if (*(num + j) < *(num + menor)){
                menor = j;
            }
        }

        aux = *(num + menor);
        *(num + menor) = *(num + i);
        *(num + i) = aux;
    }

    for (int i = 0; i < 5; i++){
        printf("%d ", *(num + i));
    }

    // for (int i = 0; i < 5; i++){
    //     *(num + i) = (int *)calloc(5, sizeof(int));

    //     if (*(num + i) == NULL){
    //         printf("ERRO! Memoria");
    //         return (1);
    //     }
    // }

    // int *num2 = (int *)malloc(5 * sizeof(int));
    // num2 = (int *)realloc(num2, 10 * sizeof(int));

    // char **nomes = (char **)malloc(5 * sizeof(char *));

    //*(nomes + 1) retorna o endereço da string que imprime co %s

    return 0;
}