/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: <Gabriela Silva Rodrigues> e <Marcos Vinicius Vargas Mello>
***************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int opc;
    FILE *arq; //Cria o ponteiro para o arquivo
    char fr[30];

    do{ //Enquanto a opcao for diferente de 3, executa o programa
        printf("(1 - Criar Arquivo; 2 - Escrever Frase no Arquivo; 3 - Sair)\nInsira a opcao: "); //Pede a opcao do usuario
        scanf("%d", &opc);
        getchar();

        if (opc == 1){ //Caso a opcao seja 1, cria o arquivo
            arq = fopen("questao_8.txt", "w"); //Cria o arquivo questao_8.txt
            fclose(arq); //Fecha o arquivo para realmente cria-lo
        }
        else if(opc == 2){ //Caso a opcao seja 2, escreve a frase no arquivo
            arq = fopen("questao_8.txt", "r"); //Abre o arquivo para leitura

            if(arq == NULL){ //Caso o arquivo nao exista, retorna para o menu
                printf("O arquivo nao existe!\n");
            }
            else{ //Caso o arquivo exista, escreve a frase no arquivo
                fclose(arq); //Fecha o arquivo para leitura
                arq = fopen("questao_8.txt", "a"); //Abre o arquivo para escrita no fim

                printf("Digite a frase: ");
                fgets(fr, 29, stdin); //Pede a frase

                fprintf(arq, "%s", fr); //Escreve a frase no arquivo
                fclose(arq); //Fecha o arquivo para salvar os dados
            }
        }
    }while(opc != 3);

    return 0;
}