/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: <Gabriela Silva Rodrigues> e <Marcos Vinicius Vargas Mello>
***************************************************************/
#include <stdio.h>
#include <string.h>

int main(){
    FILE *arq = fopen("questao_11.txt", "w"); //Cria o arquivo para a escrita
    char texto[30];
    int tam = 1;

    printf("Insira a string: ");
    fgets(texto, 29, stdin); //Pede a string

    while (tam <= strlen(texto) - 1){ //Enquanto tam for menor que o tamanho da string, executa o programa
        for (int i = 0; i < tam; i++){ //Percorre a string ate o tamanho
            fprintf(arq, "%c", texto[i]); //Escreve o caracter na posicao i
        }
        fprintf(arq, "\n"); //Pula para a proxima linha
        tam++; //Incrementa o tamanho para aumentar a quantidade de letras no proximo print
    }

    fclose(arq); //Fecha o arquivo

    return 0;
}