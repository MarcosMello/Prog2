/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: <Gabriela Silva Rodrigues> e <Marcos Vinicius Vargas Mello>
***************************************************************/
#include <stdio.h>

int main(){
    FILE *arq = fopen("questao_7.txt", "w"); //Cria o arquivo questao_7.txt para escrever a tabuada
    int n = 0, esc = 0;
    char str[49];

    for (int i = 0; i < 3; i++){//Escreve a tabuada em blocos de 3 em 3 (1, 2, 3) (4, 5, 6) (7, 8, 9)
        fprintf(arq, "+--------------+--------------+--------------+\n");
        for (int j = 1; j <= 10; j++){//Imprime ate 10 linhas desses blocos
            n = (3 * i) + 1;
            fprintf(arq, "| %.2d * %.2d = %.2d ", n, j, (n * j));
            fprintf(arq, "| %.2d * %.2d = %.2d ", n + 1, j, ((n + 1) * j));
            fprintf(arq, "| %.2d * %.2d = %.2d |\n", n + 2, j, ((n + 2) * j));
        }
    }
    fprintf(arq, "+--------------+--------------+--------------+\n");
    fclose(arq); //Fecha o arquivo para salvar os dados

    printf("Deseja ver o arquivo? (0 - Nao; Qualquer outro para Sim) "); //Ve se o ususario deseja ver o arquivo
    scanf("%d", &esc);

    if (esc){ //Caso nao seja digitado 0, o usuario deseja ver o arquivo
        FILE *arq = fopen("questao_7.txt", "r"); //Abre o arquivo para leitura

        while(fgets(str, 48, arq)){ //Le o arquivo ate o final
            printf("%s", str);
        }

        fclose(arq); //Fecha o arquivo
    }

    return 0;
}