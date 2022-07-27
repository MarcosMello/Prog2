#include <stdio.h>

struct medidaTempo{
    int horas;
    int minutos;
    int segundos;
};

struct medidaTempo HMS(int seg){
    struct medidaTempo hms;

    hms.horas = seg/3600;
    seg -= hms.horas * 3600;

    hms.minutos = seg/60;
    seg -= hms.minutos * 60;

    hms.segundos = seg;

    return hms;
}

int main(){
    struct medidaTempo hms;
    int seg;

    printf("Insira o tempo em segundos: ");
    scanf("%d", &seg);

    hms = HMS(seg);

    printf("%ds em horas, minutos e segundos eh: %d:%d:%d\n", seg, hms.horas, hms.minutos, hms.segundos);

    return 0;
}