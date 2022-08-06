/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: <Gabriela Silva Rodrigues> e <Marcos Vinicius Vargas Mello>
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *rev(char *str){
    char *str2 = (char *) calloc(strlen(str), sizeof(char));

    for (int i = 0; i < strlen(str); i++){
        *(str2 + i) = *(str + (strlen(str) - 2 - i));
    }

    *(str2 + strlen(str) - 1) = *(str + strlen(str) - 1);

    return str2;
}

char *min(char *str){
    char *str2 = (char *) calloc(strlen(str), sizeof(char));

    for (int i = 0; i < strlen(str); i++){
        if (*(str + i) >= 65 && *(str + i) <= 90){
            *(str2 + i) = 32 + *(str + i);
        }
        else{
            *(str2 + i) = *(str + i);
        }
    }

    return str2;
}

int main(){
    FILE *arq = fopen("questao_10.txt", "w");
    fclose(arq);

    char str[30];
    int opc, tam, cond;

    do{
        printf("O que deseja fazer? (0 - Sair, 1 - Escrever, 2 - Ler) ");
        scanf("%d", &opc);
        getchar();

        if (opc == 1){
            arq = fopen("questao_10.txt", "a");

            printf("Insira a palavra: ");
            fgets(str, 29, stdin);
            fprintf(arq, "%s", str);

            fclose(arq);
        }
        else if (opc == 2){
            arq = fopen("questao_10.txt", "r");

            printf("Palavras \033[0;31mpalindromas\033[0m estão marcadas em vermelho.\n");

            while (!feof(arq)){
                fgets(str, 20, arq);

                tam = strlen(str) - 1;
                cond = tam/2;
                for(int i = 0; i < cond; i++){
                    if (str[i] != str[tam-1-i]){
                        flag++;
                    }
                }

            }

            fclose(arq);
        }
    }while(opc);

    return 0;
}