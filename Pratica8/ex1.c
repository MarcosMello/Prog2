#include <stdio.h>

struct medidaTempo{
    int horas;
    int minutos;
    int segundos;
};

int SEG(int horas, int minutos, int segundos){
    return segundos + (minutos * 60) + (horas * 60 * 60);
}

int main(){
    struct medidaTempo hms;

    printf("Insira as horas, minutos e segundos separados por um espaco: ");
    scanf("%d %d %d", &hms.horas, &hms.minutos, &hms.segundos);

    printf("%d:%d:%d em segundos eh: %d\n", hms.horas, hms.minutos, hms.segundos, SEG(hms.horas, hms.minutos, hms.segundos));

    return 0;
}