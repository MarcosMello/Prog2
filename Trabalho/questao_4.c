/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: <Gabriela Silva Rodrigues> e <Marcos Vinicius Vargas Mello>
***************************************************************/
#include <stdio.h>

int main(){
    int nMax = 0;

    printf("Insira o numero de multiplos: ");
    scanf("%d", &nMax); //Pede o numero de multiplos

    FILE *arq = fopen("multiplos7.txt", "w"); //Cria o arquivo multiplos7.txt para escrever os multiplos

    for(int i = 1; i <= nMax; i++){
        fprintf(arq, "%d * 7 = %d\n", i, (i*7)); //Escreve no arquivo os multiplos
    }

    fclose(arq); //Fecha o arquivo para salvar os dados
    return 0;
}