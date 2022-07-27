#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[5];
    FILE *arq;

    if ((arq = fopen("texto.txt", "r")) == NULL){
        printf("Arquivo nao existe!");
        exit(1);
    }

    for (int i = 0; i < 5; i++){
        str[i] = fgetc(arq);
        printf("%c", str[i]);
    }

    printf("\n");

    char str2[5];
    if (fgets(str2, 5, arq) == NULL){
        printf("ERRO!\n");
    }
    else{
        printf("%s", str2);

        printf("\n");
    }

    fclose(arq);

    if ((arq = fopen("texto.txt", "r+")) == NULL){
        printf("Arquivo não existe!");
        exit(1);
    }

    char str3[10];
    char c;

    fscanf(arq, "%s", str3);

    printf("%s\n", str3);

    fseek(arq, 0, 0);

    while(!feof(arq)){
        fscanf(arq, "%c", &c);
        printf("%c", c);
    }
    printf("\n");

    return 0;
}