#include <stdio.h>

float maior(float *nums, int sz){
    float mr = nums[0];

    for (int i = 0; i < sz; i++) {
        if(mr < nums[i]){
            mr = nums[i];
        }
    }

    return mr;
}

int main(){
    float num[10], mr;

    for (int i = 0; i < 10; i++) {
        scanf("%f", &num[i]);
    }

    printf("[");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", num[i]);
    }
    printf("]\n");

    mr = maior(num, 10);

    printf("%.2f", mr);

    return 0;
}