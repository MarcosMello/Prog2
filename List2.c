#include <stdio.h>
#include <math.h>
#include <string.h>

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

void e11(){
    float salario = 0, nsalario = 0;
    int code = 0;

    printf("Insira o salario do funcionario: ");
    scanf("%f", &salario);

    printf("Insira a profissao do funcionario: ");
    scanf("%d", &code);

    switch(code){
        case (101):
            nsalario = salario * 1.0;
            printf("- Gerente -\n");
            break;
        case (102):
            nsalario = salario * 1.005;
            printf("- Analista -\n");
            break;
        case (103):
            nsalario = salario * 1.015;
            printf("- Programador -\n");
            break;
        case (104):
            nsalario = salario * 1.03;
            printf("- Designer -\n");
            break;
        default:
            nsalario = salario * 1.4;
            printf("- Cargo Desconhecido -\n");
    }

    printf("Salario antigo: R$ %.2f\n", salario);
    printf("Novo salario: R$ %.2f", nsalario);
    printf("Diferença: R$ %.2f", nsalario - salario);
}

void e12(){
    int a = 0, b = 0, c = 0;
    float area = 0, s = 0;

    printf("Insira os tres lados (a, b, c) separados por um espaço: ");
    scanf("%d %d %d", &a, &b, &c);

    if (((a + b) > c) && ((c + b) > a) && ((a + c) > b)){
        s = (a + b + c) / 2.0;
        area = sqrt((s * (s - a) * (s - b) * (s - c)));

        printf("Area: %f", area);
    }
    else{
        printf("(%d, %d, %d) nao formam triangulo", a, b, c);
    }
}

void e13(){
    int a = 0, b = 0, c = 0;

    printf("Insira os tres lados (a, b, c) separados por um espaço: ");
    scanf("%d %d %d", &a, &b, &c);

    if (((a + b) > c) && ((c + b) > a) && ((a + c) > b)){
        if (a == b && a == c){
            printf("Triangulo equilatero.");
        }
        else if(a != b && a != c && c != b){
            printf("Triangulo escaleno");
        }
        else{
            printf("Triangulo isosceles");
        }
    }
    else{
        printf("(%d, %d, %d) nao formam triangulo", a, b, c);
    }
}

void e14(){
    int a = 0, b = 0;

    printf("Insira os dois numeros separados por um espaco: ");
    scanf("%d %d", &a, &b);

    if (a%b == 0 || b%a == 0){
        printf("Sao multiplos");
    }
    else{
        printf("Nao sao multiplos");
    }
}

void e15(){
    float valor = 0;

    printf("Valor do produto: ");
    scanf("$f", &valor);

    if(valor <= 500){
        printf("Prestacoes: 5 x R$ %.2f", valor/5);
    }
    else{
        printf("Prestacoes: 8 x R$ %.2f", valor/8);
    }
}

void e16(){
    int vendas = 0, salario = 200;

    printf("Insira o valor de vendas: ");
    scanf("%f", &vendas);

    if (vendas > 1000){
        salario += 800;
    }

    salario += vendas * 0.09;

    printf("Salario: R$ %.2f", salario);
}

void e17(){
    float valor = 0, percent = 1;
    int parc = 0;

    printf("Insira o valor do produto: ");
    scanf("%f", &valor);
    printf("Insira a quantidade de parcelas: ");
    scanf("%d", &parc);

    if (parc <= 0 || parc > 20){
        printf("Valor de parcelas invalidos");
    }
    else if (parc <= 3){
        percent += 0;
    }
    else if (parc <= 7){
        percent += 0.005;
    }
    else if (parc <= 12){
        percent += 0.015;
    }
    else if (parc <= 20){
        percent += 0.030;
    }

    printf("Valor total: R$ %.2f", (valor * percent));
}

void e18(){
    char nome[30];
    float notas = 0, tmp;
    int qnt = 0;

    printf("Insira a quantidade de provas: ");
    gets(nome);

    for (int i = 0; i < qnt; i++){
        do{
            printf("Insira a nota da prova %d: ", i+1);
            scanf("%f", &tmp);
        }while(tmp < 0);
        notas += tmp;
    }

    printf("Nome: %s\nMedia: %f", nome, (notas/qnt));
}

void e19(){
    int nota;

    printf("Media: ");
    scanf("%d", &nota);

    switch (nota){
        case 0 ... 4:
            printf("CONCEITO D");
            break;
        case 5 ... 6:
            printf("CONCEITO C");
            break;
        case 7 ... 8:
            printf("CONCEITO B");
            break;
        case 9 ... 10:
            printf("CONCEITO A");
            break;
        default:
            printf("ERRO");
    }
}

void e20(){
    int n;

    printf("Insira N: ");
    scanf("%d", &n);

    switch (n)
    {
        case 1:
            printf("%f", (1 + 1/1.0));
            break;
        case 2:
            printf("%f", (1 + 1/1.0 + 1/2.0));
            break;
        case 3:
            printf("%f", (1 + 1/1.0 + 1/2.0 + 1/6.0));
            break;
        case 4:
            printf("%f", (1 + 1/1.0 + 1/2.0 + 1/6.0 + 1/24.0));
            break;
        case 5:
            printf("%f", (1 + 1/1.0 + 1/2.0 + 1/6.0 + 1/24.0 + 1/120.0));
            break;
        default:
            printf("Erro!");
            break;
    }
}

void e21(){
    int dep, cpf;
    float renda, rf;

    printf("CPF: ");
    scanf("%d", &cpf);

    printf("Dependentes: ");
    scanf("%d", &dep);

    printf("Renda: ");
    scanf("%f", &renda);

    renda -= dep * (renda * 0.05);

    if (renda >= 0 && renda < 2){
        printf("Imposto: %.2f", 0);
    }
    else if(renda < 3){
        printf("Imposto: %.2f", renda * 0.05);
    }
    else if(renda < 5){
        printf("Imposto: %.2f", renda * 0.1);
    }
    else if(renda < 7){
        printf("Imposto: %.2f", renda * 0.15);
    }
    else if (renda >= 7){
        printf("Imposto: %.2f", renda * 0.2);
    }
    else{
        printf("ERRO!");
    }
}

void e22(){
    float cP, cA, cons;

    printf("Consumo anterior - espaço - Consumo atual: ");
    scanf("%f %f", &cP, &cA);

    cons = cA - cP;

    if (cons >= 0 && cons <= 10){
        printf("Valor final: %.2f", ((cons * 0.69) + 5) * 1.025);
    }
    else if(cons <= 15){
        printf("Valor final: %.2f", ((cons * 1.17) + 5) * 1.025);
    }
    else if(cons <= 25){
        printf("Valor final: %.2f", ((cons * 1.48) + 5) * 1.025);
    }
    else if(cons > 25){
        printf("Valor final: %.2f", ((cons * 1.60) + 5) * 1.025);
    }
    else{
        printf("ERRO!");
    }
}

void e23(){
    float cP, cA, cons;

    printf("Consumo anterior - espaço - Consumo atual: ");
    scanf("%f %f", &cP, &cA);

    cons = cA - cP;

    if (cons >= 0 && cons <= 70){
        printf("Valor final: %.2f", cons * 0.09);
    }
    else if(cons <= 150){
        printf("Valor final: %.2f", cons * 0.20);
    }
    else if(cons <= 200){
        printf("Valor final: %.2f", cons * 0.23);
    }
    else if(cons > 200){
        printf("Valor final: %.2f", cons * 0.26);
    }
    else{
        printf("ERRO!");
    }
}

void e24(){
    float p;

    printf("Nivel de poluicao: ");
    scanf("%f", &p);

    if (p >= 0.05 && p <= 0.29){
        printf("Considerar aceitavel");
    }
    else if(p <= 0.4){
        printf("Suspender atividades do grupo 1");
    }
    else if(p <= 0.5){
        printf("Suspender atividades dos grupos 1 e 2");
    }
    else if(p > 0.5){
        printf("Suspender atividades de todos os grupos");
    }
    else{
        printf("ERRO!");
    }
}

void e25(){
    float sM;
    int percent;

    printf("Insira o saldo medio: ");
    scanf("%f", &sM);

    print("Salario medio: R$ %.2f", sM);

    if (sM >= 0 && sM <= 200){
        printf("Valor do credito: Nenhum credito");
    }
    else if(sM <= 400){
        printf("Valor do credito: R$ %.2f", sM * 0.2);
    }
    else if(sM <= 600){
        printf("Valor do credito: R$ %.2f", sM * 0.3);
    }
    else if(sM > 600){
        printf("Valor do credito: R$ %.2f", sM * 0.4);
    }
    else{
        printf("ERRO!");
    }
}

void e26(){
    char select;
    float v1, v2, v3, s, area;

    printf("Selecione a figura: ");
    scanf("%c", &select);

    switch(select){
        case 'q':
            printf("Insira um dos lados do quadrado: ");
            scanf("%f", &v1);

            printf("Area: %.2f", pow(v1, 2));
            break;
        case 'r':
            printf("Insira a base e a altura do retangulo: ");
            scanf("%f %f", &v1, &v2);

            printf("Area: %.2f", (v1*v2));
            break;
        case 't':
            printf("Insira os tres lados do triangulo: ");
            scanf("%f %f %f", &v1, &v2, &v3);

            s = (v1 + v2 + v3) / 2.0;
            area = sqrt((s * (s - v1) * (s - v2) * (s - v3)));

            printf("Area: %f", area);
            break;
        case 'p':
            printf("Insira a base maior, base menor e a altura: ");
            scanf("%f %f %f", &v1, &v2, &v3);

            printf("Area: %f", ((v1 + v2) * v3)/2.0);
            break;
    }
}

void e27(){
    int codigo, qnt;
    float prc;

    printf("Insira o codigo do produto: ");
    scanf("%d", &codigo);

    switch (codigo){
        case 1001:
            prc = 5.32;
            break;
        case 1324:
            prc = 6.45;
            break;
        case 6548:
            prc = 2.37;
            break;
        case 987:
            prc = 5.32;
            break;
        case 7623:
            prc = 6.45;
            break;
        default:
            print("Codigo invalido");
            return 0;
    }

    printf("Insira a quantidade do produto %d: ", codigo);
    scanf("%d", qnt);

    if (qnt > 0){
        printf("Preco total: %.2f", (prc * qnt));
    }
    else{
        printf("Erro!");
    }
}

void e28(){
    float pc, preco;
    int code1, qntd1;
    int code2, qntd2;
    float valor1, valor2;

    printf("IPI: ");
    scanf("%f", &pc);

    printf("Primeira peca\nCodigo peca - valor unitário - Qntd (separados por espaco): ");
    scanf("%d %f %d", &code1, &valor1, &qntd1);

    printf("Segunda peca\nCodigo peca - valor unitário - Qntd (separados por espaco): ");
    scanf("%d %f %d", &code2, &valor2, &qntd2);

    preco = ((valor1 * qntd1) + (valor2 * qntd2))*(1+(pc/100.0));

    printf("Preco: R$ %.2f", preco);
}

void e29(){
    float x;

    printf("Insira x: ");
    scanf("%f", x);

    if (x <= 1){
        printf("Resp: 1");
    }
    else if(x <= 2){
        printf("Resp: 2");
    }
    else if(x <= 3){
        printf("Resp: %.2f", pow(x, 2));
    }
    else if(x > 3){
        printf("Resp: %.2f", pow(x, 3));
    }
    else{
        printf("ERRO!");
    }
}

void e30(){
    float x;

    printf("Insira x: ");
    scanf("%f", x);

    if (x != 4){
        printf("Resp: %.2f", (((5 * x) + 3) / ( sqrt( (pow(x, 2) - 16) ) )) );
    }
    else{
        printf("Divisão por zero!!");
    }
}

void e31(){
    float peso;
    int planeta;

    printf("Insira o peso: ");
    scanf("%f", &peso);

    printf("Insira o planeta: ");
    scanf("%d", &planeta);

    switch (planeta)
    {
    case 1:
        printf("Peso em Mercurio: %.2f", (peso * 0.37));
        break;
    case 2:
        printf("Peso em Venus: %.2f", (peso * 0.88));
        break;
    case 3:
        printf("Peso em Marte: %.2f", (peso * 0.38));
        break;
    case 4:
        printf("Peso em Jupiter: %.2f", (peso * 2.64));
        break;
    case 5:
        printf("Peso em Saturno: %.2f", (peso * 1.15));
        break;
    case 6:
        printf("Peso em Urano: %.2f", (peso * 1.17));
        break;
    default:
        printf("ERRO!");
        break;
    }
}

void e32(){
    int fS, fN, n1, n2, sm;

    printf("Insira o numero: ");
    scanf("%d", &fN);

    fS = fN;

    n1 = (fN - ((fN/10)*10));
    fN /= 10;
    n1 += ((fN - ((fN/10)*10))*10);
    fN /= 10;
    n2 = (fN - ((fN/10)*10));
    fN /= 10;
    n2 += (fN * 10);

    sm = n1 + n2;

    if(fS == pow(sm, 2)){
        printf("Possui a caracteristica");
    }
    else{
        printf("Nao possui a caracteristica");
    }
}

void e33(){
    int lcd = 0, plasma = 0;
    float salario = 0, sf = 0;

    printf("Insira o salario: ");
    scanf("%f", &salario);

    printf("Insira a quantidade de tvs lcds: ");
    scanf("%d", &lcd);

    printf("Insira a quantidade de tvs plasma: ");
    scanf("%d", &plasma);

    if (lcd >= 10){
        sf += lcd * 50;
    }
    else{
        sf += lcd * 5;
    }

    if (plasma >= 20){
        sf += plasma * 20;
    }
    else{
        sf += plasma * 2;
    }

    sf = (sf + salario) * 0.92;

    if(sf >= 500){
        sf *= 0.85;
    }

    printf("Salario Liquido: %.2f", sf);
}

void e34(){
    char dia;
    char aovivo[3];
    float preco, precofinal;

    printf("Preco normal: ");
    scanf("%f", &preco);

    printf("Dia da semana: ");
    scanf("%c", &dia);
    getchar();

    printf("Musica ao vivo? ");
    gets(aovivo);

    precofinal = preco;

    if((strcmp(aovivo, "Sim") == 0) && (dia == 'S' || dia == 'T' || dia == 'Q')){
        precofinal *= 0.90;
    }
    else if(strcmp(aovivo, "Sim") == 0){
        precofinal *= 1.15;
    }

    printf("Preco: %.2f", precofinal);
}

void e35(){
    float a, b, c, delta, x1, x2;

    printf("Insira os coeficientes separados por um espaco: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = pow(b, 2) - (4 * a * c);

    if(delta < 0){
        printf("Sem raizes reais");
    }
    else{
        x1 = ((-1 * b) + sqrt(delta))/(2*a);
        x2 = ((-1 * b) - sqrt(delta))/(2*a);

        printf("R1 = %.2f\nR2 = %.2f", x1, x2);
    }
}

int main(){
    return 0;
}