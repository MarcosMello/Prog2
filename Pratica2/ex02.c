#include <stdio.h>

int main(){
    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;
    char strVar[10];
    long long longVar;

    printf("%d\n", sizeof longVar);
    printf("%d\n", sizeof intVar);
    printf("%d\n", sizeof floatVar);
    printf("%d\n", sizeof doubleVar);
    printf("%d\n", sizeof charVar);
    printf("%d\n", sizeof strVar);

    return 0;
}