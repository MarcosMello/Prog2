#include <stdio.h>

float area(float d){
    return 3.14159*(d/2)*(d/2);
}

int main(){
    float d;

    do{
        printf("Insira o diametro: ");
        scanf("%f", &d);
    }while(d < 0);

    printf("Area do circulo: %.2f\n", area(d));

    return 0;
}