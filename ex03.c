#include <stdio.h>

int main(){
    for (int i = 0; i <= 100; i++){
        printf("%d / 2 eh: %f\n", i, (float) i/2);
    }

    for (int i = 0; i <= 100; i++){
        printf("%d / 2 eh: %f\n", i, i/2);
    }

    return 0;
}