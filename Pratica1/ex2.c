#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, raiz1, raiz2, delta, rDelta;

    printf("insira a, b, c separados por um espaco: ");
    scanf("%f %f %f", &a, &b, &c); //permite a entrada

    delta = pow(b, 2) - (4*a*c);
    rDelta = sqrt(delta);

    if (rDelta >= 0){ //raizes reais >= 0
        raiz1 = ((-1 * b) + rDelta) / (2 * a);
        raiz2 = ((-1 * b) - rDelta) / (2 * a);

        printf("raiz 1 = %f\n", raiz1);
        printf("raiz 2 = %f", raiz2);
    }
    else{
        printf("Raiz nao e real.");
    }

    return 0;
}