/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: <Gabriela Silva Rodrigues> e <Marcos Vinicius Vargas Mello>
***************************************************************/
#include <stdio.h>
#include <string.h>

int main(){
    FILE *arq = fopen("questao_12.txt", "w"); //Cria o arquivo para a escrita
    char texto[30];
    int tam;

    printf("Insira a string: ");
    fgets(texto, 29, stdin); //Pede a string

    tam = strlen(texto) - 1; //Pega o tamanho da string menos 1 (para tirar o \n)

    while (tam != 0){ //Enquanto tam for diferente de 0, executa o programa
        for (int i = 0; i < tam; i++){ //Percorre a string ate o tamanho
            fprintf(arq, "%c", texto[i]); //Escreve o caracter na posicao i
        }
        fprintf(arq, "\n"); //Pula para a proxima linha
        tam--; //Decrementa o tamanho para poder diminuir a quantidade de letras no proximo print
    }

    fclose(arq); //Fecha o arquivo

    return 0;
}