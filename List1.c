#include <stdio.h>
#include <math.h>

void e1(){
    int n1, n2;

    printf("Insira o primeiro numero: ");
    scanf("%d", &n1);

    printf("Insira o primeiro numero: ");
    scanf("%d", &n2);

    printf("O produto de %d com %d eh %d", n1, n2, n1 * n2);
}

void e2(){
    int n1;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n1);

    printf("Antecessor: %d\nSucessor: %d", n1-1, n1+1);
}

void e3(){
    int n1, n2, n3;

    printf("Insira os tres numeros separados por um espaco: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Media: %d", ((n1 + n2 + n3) / 3));
}

void e4(){
    float n1, n2, n3;

    printf("Insira os tres numeros separados por um espaco: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Media: %.3f", ((n1 + n2 + n3) / 3.0));
}

void e5(){
    float n1, n2;

    printf("Insira as duas notas separadas por um espaco: ");
    scanf("%f %f", &n1, &n2);

    printf("Media: %.3f", (((n1 * 3) + (n2 * 7)) / 10.0));
}

void e6(){
    float x1, y1, x2, y2, d;

    printf("Insira as duas coordenadas separadas por um espaco (x1 y1 x2 y2): ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("Distancia: %.2f", d);
}

void e7(){
    float conta, g, vn;
    int pessoas;

    printf("Insira o valor da conta: ");
    scanf("%f", &conta);

    printf("Insira a gorjeta (em porcentagem): ");
    scanf("%f", &g);

    printf("Insira a quantidade de pessoas para dividir a conta: ");
    scanf("%d", &pessoas);

    vn = conta * (1 + (g / 100));

    printf("Valor para cada uma das %d pessoas é R$ %.2f.", pessoas, (vn / pessoas));
}

void e8(){
    float rs, dolar;

    printf("Insira o valor em real para ser convertido: ");
    scanf("%f", &rs);

    printf("Insira a cotacao do dolar: ");
    scanf("%f", &dolar);

    printf("Valor correspondente: %.2f", (rs/dolar));
}

void e9(){
    float lado;

    printf("Insira o tamanho do lado de um quadrado: ");
    scanf("%f", &lado);

    printf("Área do quadrado: %.3f", pow(lado, 2));
}

void e10(){
    int dias;

    printf("Insira a quantidade de dias que esse trabalhou: ");
    scanf("%d", &dias);

    printf("O trabalhador recebera R$ %.2f", ((dias * 30.0) * 0.92));
}

void e11(){
    int num, n1, n2;

    printf("Insira o numero inteiro positivo: ");
    scanf("%d", &num);

    n1 = (num - ((num/10) * 10));
    num /= 10;
    n2 = (num - ((num/10) * 10));
    num /= 10;

    printf("Numero ao contrario: %d%d%d", n1, n2, num);
}

void e12(){
    int num, n1, n2, n3;

    printf("Insira o numero inteiro positivo: ");
    scanf("%d", &num);

    n3 = (num - ((num/10) * 10));
    num /= 10;
    n2 = (num - ((num/10) * 10));
    num /= 10;
    n1 = (num - ((num/10) * 10));
    num /= 10;

    printf("Numeros: \n%d\n%d\n%d\n%d", num, n1, n2, n3);
}

void e13(){
    float a1, a2, a3, pr;
    float v1, v2, v3, t;

    printf("Insira o valor investido pelos amigos separados por um espaco: ");
    scanf("%f %f %f", &a1, &a2, &a3);

    printf("Insira o valor do premio: ");
    scanf("%f", &pr);

    t = a1 + a2 + a3;
    v1 = ((100 * a1) / t);
    v2 = ((100 * a2) / t);
    v3 = 100 - v1 - v2;

    printf("O valor para o primeiro amigo: %.2f", (pr * (v1 / 100)));
    printf("O valor para o segundo amigo: %.2f", (pr * (v2 / 100)));
    printf("O valor para o terceiro amigo: %.2f", (pr * (v3 / 100)));
}

void e14(){
    float ms;

    printf("Insira a velocidade em m/s: ");
    scanf("%f", &ms);

    printf("%f em km/h eh %f", ms, (ms * 3.6));
}

void e15(){
    float a, pi = 3.14159;

    printf("Insira o angulo em graus: ");
    scanf("%f", &a);

    printf("%f em rad eh %f", a, (a * (pi / 180)));
}

int main(){
    return 0;
}