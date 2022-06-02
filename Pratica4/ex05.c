#include <stdio.h>

int main(){
    float d;

    do{
        printf("Insira o diametro: ");
        scanf("%f", &d);
    }while(d < 0);

    printf("Area do circulo: %.2f\n", 3.14159*(d/2)*(d/2));

    return 0;
}