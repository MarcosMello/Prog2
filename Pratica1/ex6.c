#include <stdio.h>

int main(){
    float saldo = 0, tmp, saque;
    char c;

    do{
        do{
            printf("(a) Consulta Saldo\n(b) Saque\n(c) Deposito\n(d) Sair\n");
            printf("Insira a opcao: ");
            scanf("%c", &c);
            getchar();
            //usando o getchar para capturar o enter que o scanf não descartou
        }while(c != 'a' && c != 'b' && c != 'c' && c != 'd');

        switch (c){
            case 'a':
                printf("Saldo = %.2f\n", saldo);
                break;
            case 'b':
                do{
                    printf("O quanto deseja sacar? (Disponivel: R$ %.2f; Valores <= 0 para sair) ", saldo);
                    scanf("%f", &saque);
                    getchar();
                    //usando o getchar para capturar o enter que o scanf não descartou
                }while(saque >= saldo);

                if (saque <= 0){
                    printf("Saque cancelado!\n");
                }
                else{
                    saldo -= saque;
                    printf("Voce sacou R$ %.2f! Saldo disponivel: R$ %.2f\n", saque, saldo);
                }

                break;
            case 'c':
                do{
                    printf("Faca o deposito: ");
                    scanf("%f", &tmp);
                    getchar();
                    //usando o getchar para capturar o enter que o scanf não descartou
                }while(tmp <= 0);

                saldo += tmp;

                printf("Deposito de: R$ %.2f\nNovo saldo: R$ %.2f\n", tmp, saldo);
                break;
        }
    }while(c != 'd');

    return 0;
}