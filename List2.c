#include <stdio.h>
#include <math.h>

void e1(){
    float n1;

    printf("Insira um numero: ");
    scanf("%f", &n1);

    if (n1 < 25){
        printf("Menor que 25!");
    }
    else if (n1 == 40){
        printf("Igual a 40!");
    }
    else if (n1 > 80){
        printf("Maior que 80!");
    }
}

void e2(){
    int n1;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n1);

    if (n1 % 10 == 0){
        printf("Divisivel por 10!");
    }
    if (n1 % 5 == 0){
        printf("Divisivel por 5!");
    }
    if (n1 % 2 == 0){
        printf("Divisivel por 2!");
    }
}

void e3(){
    float n1;

    printf("Insira um numero: ");
    scanf("%f", &n1);

    if ((n1 > -10) && (n1 <= 30)){
        printf("Pertence ao intervalo!");
    }
    else{
        printf("Nao pertence ao intervalo!");
    }
}

void e4(){
    int n1;

    printf("Insira um numero inteiro (Intervalo = [1, 12]): ");
    scanf("%d", &n1);

    switch (n1){
        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Março");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;
        default:
            printf("Mes Invalido"); //Não consigo dar print com acentos
    }
}

void e5(){
    float tmp, maior;

    printf("Insira o primeiro numero: ");
    scanf("%f", &tmp);
    maior = tmp;

    printf("Insira o segundo numero: ");
    scanf("%f", &tmp);

    if (tmp > maior){
        maior = tmp;
    }

    printf("Insira o terceiro numero: ");
    scanf("%f", &tmp);

    if (tmp > maior){
        maior = tmp;
    }

    printf("%.2f eh o maior!", maior);
}

void e6(){
    float n1, n2, n3;

    printf("Insira os tres numeros separados por um espaco: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 <= n2 && n1 <= n3){
        printf("%.2f", n1);
    }
    else if (n2 <= n1 && n2 <= n3){
        printf("%.2f", n2);
    }
    else{
        printf("%.2f", n3);
    }

    printf("\n");

    if ((n1 >= n2 && n1 <= n3) || (n1 <= n2 && n1 >= n3)){
        printf("%.2f", n1);
    }
    else if ((n2 >= n1 && n2 <= n3) || (n2 <= n1 && n2 >= n3)){
        printf("%.2f", n2);
    }
    else{
        printf("%.2f", n3);
    }

    printf("\n");

    if (n1 >= n2 && n1 >= n3){
        printf("%.2f", n1);
    }
    else if (n2 >= n1 && n2 >= n3){
        printf("%.2f", n2);
    }
    else{
        printf("%.2f", n3);
    }

    printf("\n");
}

void e7(){
    float n1, n2;

    printf("Insira dois numeros separados por um espaco: ");
    scanf("%f %f", &n1, &n2);

    if (pow(n1, 2) <= pow(n2, 2)){
        printf("N1 = %.2f", n1);
    }
    else{
        printf("N2 = %.2f", n2);
    }
}

void e8(){
    int ng = 0;
    float tmp;

    printf("Insira o primeiro numero: ");
    scanf("%f", &tmp);

    if (tmp < 0){
        ng++;
    }

    printf("Insira o segundo numero: ");
    scanf("%f", &tmp);

    if (tmp < 0){
        ng++;
    }

    printf("Insira o terceiro numero: ");
    scanf("%f", &tmp);

    if (tmp < 0){
        ng++;
    }

    printf("Insira o quarto numero: ");
    scanf("%f", &tmp);

    if (tmp < 0){
        ng++;
    }

    printf("Insira o quinto numero: ");
    scanf("%f", &tmp);

    if (tmp < 0){
        ng++;
    }

    printf("Negativos: %d", ng);
}

void e9(){
    int i;

    printf("Insira a idade: ");
    scanf("%d", i);

    if (i <= 18){
        printf("Menor de idade");
    }
    else if(i >= 19 && i <= 64){
        printf("Maior de idade");
    }
    else{
        printf("Idosa");
    }
}

void e10(){
    int mes;

    printf("Indique o mes do ano: ");
    scanf("%d", &mes);

    switch (mes){
        case 1:
            printf("31");
            break;
        case 2:
            printf("28");
            break;
        case 3:
            printf("31");
            break;
        case 4:
            printf("30");
            break;
        case 5:
            printf("31");
            break;
        case 6:
            printf("30");
            break;
        case 7:
            printf("31");
            break;
        case 8:
            printf("31");
            break;
        case 9:
            printf("30");
            break;
        case 10:
            printf("31");
            break;
        case 11:
            printf("30");
            break;
        case 12:
            printf("31");
            break;
    }
}

void e11(){ //fazer

}

void e12(){

}

void e13(){

}

void e14(){

}

void e15(){

}

void e16(){

}

void e17(){

}

void e18(){

}

void e19(){

}

void e20(){

}

void e21(){

}

void e22(){

}

void e23(){

}

void e24(){

}

void e25(){

}

void e26(){

}

void e27(){

}

void e28(){

}

void e29(){

}

void e30(){

}

void e31(){

}

void e32(){

}

void e33(){

}

void e34(){

}

void e35(){

}

int main(){
    return 0;
}