#include <stdio.h>

struct medidaTempo{
    int horas;
    int minutos;
    int segundos;
};

int SEG(struct medidaTempo hms){
    return hms.segundos + (hms.minutos * 60) + (hms.horas * 60 * 60);
}

int main(){
    struct medidaTempo hms;

    printf("Insira as horas, minutos e segundos separados por um espaco: ");
    scanf("%d %d %d", &hms.horas, &hms.minutos, &hms.segundos);

    printf("%d:%d:%d em segundos eh: %d\n", hms.horas, hms.minutos, hms.segundos, SEG(hms));

    return 0;
}