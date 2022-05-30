#include <stdio.h>
#include <math.h>

void e1(){
    int a,b;

    printf("Digite dois numeros (a <= b): ");
    scanf("%d %d", &a, &b);

    printf("Todos os numeros entre a e b:");
    for(int i = a; i <= b; i++){
        printf("%d ",i);
    }
    printf("\n");

    printf("Todos os numeros impares entre a e b: ");
    for(int i = a; i <= b; i++){
        if(i % 2 != 0){
            printf("%d ",i);
        }
    }
    printf("\n");

    printf("Todos os numeros impares entre a e b que sao multiplos de 3: ");
    for(int i = a; i <= b; i++){
        if(i % 2 != 0 && i % 3 == 0){
            printf("%d ",i);
        }
    }
    printf("\n");
}

void e2(){
    int n, numeros = 0;
    printf("Digite o numero de numeros: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite o numero: ");
        scanf("%d", &numeros);

        printf("%d x 3 = %d\n", numeros, numeros * 3);
    }
}

void e3(){
    int n, numeros = 0;

    printf("Digite o numero de numeros: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite o numero: ");
        scanf("%d", &numeros);

        if(numeros > 0){
            printf("Positivo\n");
        }else{
            printf("Negativo\n");
        }
    }
}

void e4(){
    int n, numeros = 0, negativos = 0;

    printf("Digite o numero de numeros: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite o numero: ");
        scanf("%d", &numeros);

        if(numeros < 0){
            printf("Negativos - ");
            negativos++;
            printf("%d\n", negativos);
        }
    }
}

void e5(){
//calculate the aritmethic mean of read values and only stop when get a negative number
    int n = 0, numero = 0, soma = 0;
    float media;

    do{
        printf("Digite o numero: ");
        scanf("%d", &numero);

        soma += numero;
        n++;
    }while(numero >= 0);

    media = soma / n;
    printf("Media = %.2f\n", media);
}

void e6(){
    int n = 0, numero = 0, soma = 0;
    float media = 0;

    do{
        printf("Digite o numero: ");
        scanf("%d", &numero);

        soma += numero;
        n++;
    }while(numero % 2 == 0 || numero == 0);

    if (numero % 2 != 0){
        printf("Media = %.2f\n", soma / (n*1.0));
    }
    else{
        printf("Impar\n");
    }
}

void e7(){
    int n = 0, numero = 0, maior = 0, menor = 0;

    for(int i = 0; i < 50; i++){
        printf("Digite o numero: ");
        scanf("%d", &numero);

        if(numero > maior){
            maior = numero;
        }
        if(numero < menor){
            menor = numero;
        }
    }

    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);
}

void e8(){
    int n = 0, numero = 0, soma = 0, maior = 0, menor = 0;
    float media = 0;

    printf("Digite o numero: ");
    scanf("%d", &n);

    if (n >= 3){
        for(int i = 0; i < n; i++){
            printf("Digite o numero: ");
            scanf("%d", &numero);

            if (numero > maior){
                soma += maior;
                maior = numero;
            }
            if (numero < menor){
                soma += menor;
                menor = numero;
            }
            if (numero > menor && numero < maior){
                soma += numero;
            }
        }

        media = soma / n;
    }
    else{
        printf("Quantidade invalida\n");
    }
}

void e9(){
    int x, n, numero, pos = -1;

    printf("Digite o numero a ser encontrado: ");
    scanf("%d", &x);
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite o numero: ");
        scanf("%d", &numero);

        if (numero == x){
            pos = i;
        }
    }

    if(pos != -1){
        printf("O numero %d foi encontrado na posicao %d\n", x, pos);
    }
    else{
        printf("O numero %d nao foi encontrado\n", x);
    }
}

void e10(){
    char nome[30];
    int n = 0;
    float nota = 0, soma = 0, media;

    printf("Digite o nome do aluno: ");
    fgets(nome, 30, stdin);

    printf("Digite o numero de notas: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite a nota: ");
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / n;
    printf("Nome: %s", nome);
    printf("Media = %.2f\n", media);
}

void e11(){
    float celsius = 0, fahrenheit = 0;

    for(int i = -100; i <= 100; i += 5){
        celsius = i;
        fahrenheit = (celsius * 9/5) + 32;
        printf("%.2f\n", fahrenheit);
    }
}

void e12(){
    const float PI = 3.141592653;

    float raio = 0, area = 0;
    char n = ' ';

    printf("Digite o raio: ");
    scanf("%f", &raio);

    while(n != 'N' || n != 'n'){
        area = PI * raio * raio;
        printf("%.2f\n", area);

        printf("Deseja continuar? (S/N): ");
        n = getchar();
        if (n == 'S' || n == 's'){
            printf("Digite o raio: ");
            scanf("%f", &raio);
        }
    }
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

void e36(){

}

void e37(){

}

void e38(){

}

void e39(){

}

void e40(){

}

void e41(){

}

void e42(){

}

void e43(){

}

int main(){
    return 0;
}