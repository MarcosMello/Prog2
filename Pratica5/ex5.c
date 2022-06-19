#include <stdio.h>

void maior(int *nums, int sz, int ref){
    for (int i = 0; i < sz; i ++){
        if(nums[i] > ref){
            printf("%d ", nums[i]);
        }
    }
    printf("\n");
}

int menor(int *nums, int sz, int ref){
    int qnt = 0;

    for (int i = 0; i < sz; i++){
        if(nums[i] < ref){
            qnt++;
        }
    }

    return qnt;
}

int equal(int *nums, int sz, int ref){
    int qnt = 0;

    for (int i = 0; i < sz; i++){
        if(nums[i] == ref){
            qnt++;
        }
    }

    return qnt;
}

int main(){
    int num[10], vref, menores, equals;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    scanf("%d", &vref);

    maior(num, 10, vref);

    menores = menor(num, 10, vref);

    equals = equal(num, 10, vref);

    printf("%d %d", menores, equals);

    return 0;
}