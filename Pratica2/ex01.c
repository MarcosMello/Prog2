#include <stdio.h>

int main(){
    int op = 0;
    float n1 = 0, n2 = 0;

    do{
        printf("1 - Adicao;\n2 - Subtracao;\n3 - Multiplicacao;\n4 - Divisao;\n5 - Sair.\n");
        printf("Insira a operacao desejada: ");
        scanf("%d", &op);

        if (op >= 1 && op < 5){
            printf("Insira os dois numeros separados por um espaco: ");
            scanf("%f %f", &n1, &n2);

            switch(op){
                case 1:
                    printf("Soma: %.2f\n", (n1+n2));
                    n1 = 0;
                    n2 = 0;

                    break;
                case 2:
                    printf("Subtracao: %.2f\n", (n1-n2));
                    n1 = 0;
                    n2 = 0;

                    break;
                case 3:
                    printf("Multiplicacao: %.2f\n", (n1*n2));
                    n1 = 0;
                    n2 = 0;

                    break;
                case 4:
                    if (n2 != 0){
                        printf("Divisao: %.2f\n", (n1/n2));
                    }
                    else{
                        printf("Divisao por 0 é impossivel!\n");
                    }
                    n1 = 0;
                    n2 = 0;

                    break;
            }
        }
    }while(op != 5);

    return 0;
}