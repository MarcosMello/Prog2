/***************************************************************
Trabalho Computacional – Programação II – 2022/1 – Ciência/Engenharia da Computação
Grupo: <Gabriela Silva Rodrigues> e <Marcos Vinicius Vargas Mello>
***************************************************************/
#include <stdio.h>

struct letra{ //Cria a estrutura letra com letra e quantidade
    int letra;
    int qnt;
};

int main(){
    struct letra letras[26]; //Cria uma lista com 26 estruturas do tipo letra (alfabeto)

    FILE *arq = fopen("questao_6.txt", "r"); //Abre o arquivo questao_6.txt para ler os dados
    char carac;

    int maior = 0;
    struct letra aux; //Cria uma estrutura auxiliar para armazenar a letra e a quantidade

    for (int i = 0; i < 26; i++){ //Preenche todas as estruturas com letra (de a a z) e quantidade 0
        letras[i].letra = 97 + i;
        letras[i].qnt = 0;
    }

    carac = fgetc(arq); //Le o arquivo caracter por caracter
    while (carac != EOF){ //Enquanto nao chegar no final do arquivo, conta a quantidade de cada letra
        if (carac >= 65 && carac <= 90){ //Maiusculas (A a Z) recebem + 32 para virarem as minusculas na Tabela ASCII
            carac += 32;
        }
        if (carac >= 97 && carac <= 122){ //Minusculas (a a z) sao adicionadas (++ em quantidade) na lista de letras usando seu codigo ASCII - 97 para dar sua posicao
            letras[carac - 97].qnt++;
        }

        carac = fgetc(arq); //Le o proximo caracter
    }

    for (int i = 0; i < 26; i++){ //Faz o bubble sort para ordenar a lista de letras
        maior = i;
        for (int j = i; j < 26; j++){ //Percorre a lista de letras verificando se a quantidade de letras de maior é maior que a quantidade da letra atual para ordenar
            if (letras[maior].qnt < letras[j].qnt){ //Se a quantidade de letras de maior for maior que a atual, a letra atual passa a ser a letra de maior
                maior = j;
            }
        }
        aux = letras[i];
        letras[i] = letras[maior];
        letras[maior] = aux;
    }

    for (int i = 0; i < 26; i++){ //Printa a lista ordenada de maior para menor
        printf("%c: ", letras[i].letra);
        printf("%d\n", letras[i].qnt);
    }

    fclose(arq); //Fecha o arquivo para salvar os dados
    return 0;
}