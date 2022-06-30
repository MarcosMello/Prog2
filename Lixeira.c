#include <stdio.h>

int main(){
    int vet[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

    int (*p)[4], **q;
    p = vet;
    **q = *p;

    return 0;
}