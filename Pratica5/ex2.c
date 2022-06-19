#include <stdio.h>

int soma(int *nums, int sz){
    int sum = 0;

    for (int i = 0; i < sz; i++) {
        sum += nums[i];
    }

    return sum;
}

int main(){
    int num[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    printf("[");
    for (int i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }
    printf("]\n");

    printf("%d\n", soma(num, 5));

    return 0;
}