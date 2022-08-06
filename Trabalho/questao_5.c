/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: <Gabriela Silva Rodrigues> e <Marcos Vinicius Vargas Mello>
***************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arq = fopen("questao_5.txt", "r"); //Abre o arquivo para leitura
    FILE *arq2;
    char nome[22], carac;

    if (arq == NULL){ //Verifica se o .txt não existe
        arq = fopen("questao_5.bin", "rb"); //Abre o arquivo bin para leitura (pois o txt nao existe)

        if (arq == NULL){ //Verifica se o .bin não existe e mostra a mensagem de erro
            printf("ERRO!");
            return 0;
        }

        strcpy(nome, "questao_5_versao2.bin"); //Copia o nome do arquivo para a variavel nome
        arq2 = fopen(nome, "wb"); //Abre o arquivo bin para escrita
    }
    else{
        strcpy(nome, "questao_5_versao2.txt"); //Copia o nome do arquivo para a variavel nome
        arq2 = fopen(nome, "w"); //Abre o arquivo para escrita
    }

    carac = fgetc(arq); //Le o arquivo (caracter por caracter)
    while(carac != EOF){ //Enquanto esse caracter nao for o final do arquivo, escreve no arquivo
        if (carac == '!' || carac == '.' || carac == '?' || carac == ',' || carac == ':' || carac == ';'){ //Se o caracter for um dos caracteres de pontuação, escreve um espaco em branco no arquivo
            fputc(' ', arq2);
        }
        else{ //Se nao escreve o proprio caracter
            fputc(carac, arq2);
        }

        carac = fgetc(arq); //Le o proximo caracter
    }

    fclose(arq); //Fecha ambos arquivos
    fclose(arq2);

    return 0;
}