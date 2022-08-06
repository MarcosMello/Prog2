/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: <Gabriela Silva Rodrigues> e <Marcos Vinicius Vargas Mello>
***************************************************************/
#include <stdio.h>

int main(){
    FILE *arq = fopen("questao_9.txt", "r"); //Abre o arquivo para a leitura
    char carac;

    carac = fgetc(arq); //Le o arquivo caracter por caracter
    while (carac != EOF){ //Enquanto nao chegar ao final do arquivo, imprime o caracter
        printf("%c", carac);
        carac = fgetc(arq); //Le o proximo caracter
    }

    fclose(arq); //Fecha o arquivo
    return 0;
}