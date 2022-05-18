#include <stdio.h>

int main(){
    float preco = 0, precof = 0, impostos = 0;
    int pais = 0;
    char transp = ' ', carg = ' ';

    do{
        printf("Digite o preco unitario: ");
        scanf("%f", &preco);
        if (preco > 0){
            do{
                printf("1 - Estados Unidos\n2 - Mexico\n3 - Outros\n");
                printf("Digite o pais de origem: ");
                scanf("%d", &pais);
            }while(pais < 1 || pais > 3);
            do{
                printf("T - terrestre\nF - Fluvial\nA - aereo\n");
                printf("Digite o meio de transporte: ");
                scanf("%c", &transp);
            }while(transp != 'T' && transp != 'F' && transp != 'A');
            do{
                printf("1 - Sim\nN - Nao\n");
                printf("Carga Perigosa? ");
                scanf("%c", &carg);
            }while(carg != '1' && carg != 'N');

            if (preco > 100){
                printf("Imposto: R$ %.2f\n", (preco*0.1));
                precof += (preco*1.1);
                impostos += (preco*0.1);
            }
            else{
                printf("Imposto: R$ %.2f\n", (preco*0.05));
                precof += (preco*1.05);
                impostos += (preco*0.05);
            }

            switch(pais){
                case (1):
                    if (carg == '1'){
                        printf("Valor do transporte: R$ 50,00\n");
                        precof += 50;
                    }
                    else{
                        printf("Valor do transporte: R$ 12,00\n");
                        precof += 12;
                    }
                    break;
                case (2):
                    if (carg == '1'){
                        printf("Valor do transporte: R$ 21,00\n");
                        precof += 21;
                    }
                    else{
                        printf("Valor do transporte: R$ 21,00\n");
                        precof += 21;
                    }
                    break;
                case (3):
                    if (carg == '1'){
                        printf("Valor do transporte: R$ 24,00\n");
                        precof += 24;
                    }
                    else{
                        printf("Valor do transporte: R$ 60,00\n");
                        precof += 60;
                    }
                    break;
            }

            if (pais == 2 && transp == 'A'){
                printf("Valor do seguro: R$ %.2f\n", (preco/2.0));
                precof += preco/2.0;
            }
            else{
                printf("Valor do seguro: R$ 0\n");
            }

            printf("Valor final: %.2f\n", precof);

        }
    }while(preco > 0);

    printf("Valor total dos impostos: R$ %.2f", impostos);

    return 0;
}