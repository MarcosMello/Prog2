#include <stdio.h>

struct DATA{
    int dia;
    int mes;
    int ano;
};

char *NOME_MES(int mes){
    switch (mes){
        case 1:
            return "Janeiro";
        case 2:
            return "Fevereiro";
        case 3:
            return "Março";
        case 4:
            return "Abril";
        case 5:
            return "Maio";
        case 6:
            return "Junho";
        case 7:
            return "Julho";
        case 8:
            return "Agosto";
        case 9:
            return "Setembro";
        case 10:
            return "Outubro";
        case 11:
            return "Novembro";
        case 12:
            return "Dezembro";
    }
}

int main(){
    struct DATA data;

    printf("Insira o dia, mes e ano separados por um espaco: ");
    scanf("%d %d %d", &data.dia, &data.mes, &data.ano);

    printf("Entrada: %d %d %d Saída: %d de %s de %d\n", data.dia, data.mes, data.ano, data.dia, NOME_MES(data.mes), data.ano);

    return 0;
}