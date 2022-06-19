#include <stdio.h>

void inv(float *nums, int sz){
    printf("[");
    for (int i = (sz - 1); i >= 0; i--){
        printf("%.2f ", nums[i]);
    }
    printf("]\n");
}

int main(){
    float num[10];

    for (int i = 0; i < 10; i++) {
        scanf("%f", &num[i]);
    }

    inv(num, 10);

    return 0;
}