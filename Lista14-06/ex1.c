#include <stdio.h>

int main(){
    float s[6][6], a, r[6][6];

    for (int i = 0; i <= 5; i++){
        for (int j = 0; j <= 5; j++){
            scanf("%f", &s[i][j]);
        }
    }

    do{
        scanf("%f", &a);
    }while(a < 1 || a > 10);

    for (int i = 0; i <= 5; i++){
        for (int j = 0; j <= 5; j++){
            r[i][j] = s[i][j] * a;
            printf("%.2f", r[i][j]);
        }
    }

    return 0;
}