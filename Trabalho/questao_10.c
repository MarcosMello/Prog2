/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: <Gabriela Silva Rodrigues> e <Marcos Vinicius Vargas Mello>
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *rev(char *str){ //Funcao para inverter a frase
    char *str2 = (char *) calloc(strlen(str), sizeof(char)); //Aloca uma string2 com o tamanho da string1

    for (int i = 0; i < strlen(str); i++){
        *(str2 + i) = *(str + (strlen(str) - 2 - i)); //Inverte a palavra adicionando na string2 os caracters de tras para frente
    }

    *(str2 + strlen(str) - 1) = *(str + strlen(str) - 1);
    //Bota o caracter de fim de frase no final da string (esse é descartado no for anterior pois ele não é necessário e faz com que não seja possivel comparar as duas)

    return str2; //Retorna a string2
}

char *min(char *str){ //Funcao para deixar a palavra em minusculo
    char *str2 = (char *) calloc(strlen(str), sizeof(char)); //Aloca uma string2 com o tamanho da string1

    for (int i = 0; i < strlen(str); i++){ //Percorre a string1
        if (*(str + i) >= 65 && *(str + i) <= 90){ //Se o caracter for maiusculo, converte para minusculo (somando mais 32 (ver Tabela ASCII))
            *(str2 + i) = 32 + *(str + i); //Adiciona o caracter na string2
        }
        else{ //Se nao for maiusculo (ou qualquer outra coisa), adiciona o caracter na string2
            *(str2 + i) = *(str + i);
        }
    }

    return str2; //Retorna a string2
}

int main(){
    FILE *arq = fopen("questao_10.txt", "w"); //Cria o arquivo para a escrita
    fclose(arq); //Fecha o arquivo para realmente cria-lo

    char str[30];
    int opc;

    do{//Enquanto for diferente de 0, executa o programa
        printf("O que deseja fazer? (0 - Sair, 1 - Escrever, 2 - Ler) ");
        scanf("%d", &opc);
        getchar();

        if (opc == 1){//Escreve no arquivo
            arq = fopen("questao_10.txt", "a"); //Abre o arquivo para a escrita no fim

            printf("Insira a palavra: ");
            fgets(str, 29, stdin); //Le a palavra
            fprintf(arq, "%s", str); //Escreve a palavra no arquivo

            fclose(arq); //Fecha o arquivo para salvar as alteracoes
        }
        else if (opc == 2){ //Le o arquivo
            arq = fopen("questao_10.txt", "r"); //Abre o arquivo para a leitura

            printf("Palavras \033[0;31mpalindromas\033[0m estão marcadas em vermelho.\n");

            while(fgets(str, 29, arq)){ //Le o arquivo ate ser o final
                if (!strcmp(min(str), rev(min(str)))){ //Compara a palavra com a palavra invertida (ambas em minusculo)
                    printf("\033[0;31m%s\033[0m", str); //Se forem iguais, imprime a palavra em vermelho (pois e palindroma)
                }
                else{ //Se nao forem iguais (nao for palindroma), imprime a palavra normalmente
                    printf("%s", str);
                }
            }

            fclose(arq); //Fecha o arquivo
        }
    }while(opc);

    return 0;
}