#include <stdio.h>

void e1(){
    int vet[6];
    int neg;

    for(int i = 0; i < 6; i++){
        printf("Insira o numero: ");
        scanf("%d", &vet[i]);
    }

    for(int j = 0; j < 6; j++){
        if (vet[j] < 0){
            neg++;
        }
    }

    printf("Negativos: %d", neg);
}

void e2(){
    int teste1[10], teste2[10];

    for (int i = 0; i < 10; i++){
        printf("Insira o numero: ");
        scanf("%d", teste1[i]);
    }


    for (int j = 0; j < 6; j++){
        if (!(j%2)){
            teste2[j] = teste1[j] * 5;
        }
        else{
            teste2[j] = teste1[j] + 5;
        }
    }

    printf("Teste1 = [");
    for (int k = 0; k < 6; k++){
        printf("%d, ", teste1[k]);
    }
    printf("].\n");

    printf("Teste2 = [");
    for (int l = 0; l < 6; l++){
        printf("%d, ", teste2[l]);
    }
    printf("].\n");
}

void e3(){
    float v1[10];

    for (int i = 0; i < 10; i++){
        printf("Insira o numero: ");
        scanf("%f", &v1[i]);
    }

    for (int j = 0; j < 10; j++){
        if (v1[j] <= 10){
            printf("Valor <= 10 encontrado!\n Valor = %d - Posicao = %d\n", v1[j], j);
        }
    }
}

void e4(){
    int P = 19;
    float v[20], M = ;

    for (int i = 0; i < 20; i++){
        printf("Insira o numero: ");
        scanf("%f", &v[i]);
    }

    M = v[19];

    for (int j = 0; j < 20; j++){
        if (v[j] < M){
            M = v[j];
            pos = j;
        }
    }

    printf("O menor elemento de N é", M, "e sua posicao dentro do vetor é: ", P);
}

void e5(){
    float v[20], tmp;

    for (int i = 0; i < 20; i++){
        printf("Insira o numero: ");
        scanf("%f", &v[i]);
    }

    for (int j = 0; j < 10; j++){
        tmp = v[j];
        v[j] = v[j+10];
        v[j+10] = tmp;
    }

    printf("V1 = [");
    for (int k = 0; k < 20; k++){
        printf("%f, ", v1[k]);
    }
    printf("].\n");
}

void e6(){
    int par = 0, impar = 0, v[5];

    for (int i = 0; i < 5; i++){
        printf("Insira o numero: ");
        scanf("%d", &v[i]);
    }

    for (int j = 0; j < 5; j++){
        if (!(j%2)){
            par += v[i];
        }
        else{
            impar += v1[i];
        }
    }

    printf("Pares: %d\nImpares: %d", par, impar);
}

void e7(){
    float l1[25], valor;
    int rep;

    for (int i = 0; i < 25; i++){
        printf("Insira o numero: ");
        scanf("%f", &v[i]);
    }

    printf("Insira o numero da pesquisa: ");
    scanf("%d", &valor);

    for (int j = 0; j < 25; j++){
        if (valor <= l1[j] && valor >= l1[j]){
            rep++;
        }
    }

    printf("Foram encontrados %d, numeros iguais a %d no vetor", rep, valor);
}

void e8(){
    char nome[30], alunos[15][2], R[5], G[5];
    int acertos = 0;

    for (int i = 0; i < 5; i++){
        printf("Resposta da %d questao: ", i+1);
        scanf("%c", &G[i]);
    }

    for (int j = 0; j < 15; j++){
        acertos = 0;

        printf("Insira o nome: ");
        fgets(nome, 30, stdin);

        for (int k = 0; k < 5; k++){
            printf("Resposta da %d questao: ", k+1);
            scanf("%c", &R[k]);

            if (R[k] == G[k]){
                acertos++;
            }
        }

        alunos[j][0] = nome;
        alunos[j][1] = R;

        printf("O(a) aluno(a) %s teve %d acertos e ficou com nota %d.", nome, R);
    }
}

void e9(){
    int G[13], R[13], AP[10][2], acertos = 0, id = 0;

    for (int i = 0; i < 13; i++){
        printf("Insira 1, 0 ou 2: ");
        scanf("%d", &G[i]);
    }

    for (int k = 0; k < 10; k++){
        acertos = 0;

        printf("Insira o numero da cartela: ");
        scanf("%d", &id);

        for (int j = 0; j < 13;){
            printf("Insira 0, 1 ou 2: ");
            scanf("%d", &G[j]);

            if (R[j] == 0 || R[j] == 1 || R[j] == 2){
                if (G[j] == R[j]){
                    acertos++;
                }
                j++;
            }
        }

        AP[k][0] = id;
        AP[k][1] = acertos;
    }

    for (int l = 0; l < 10; l++){
        printf("Apostador %d com cartela %d acertou %d;\n", l, AP[l][0], AP[l][1]);
    }
}

void e10(){
    int G[13], R[13], AP[10][2], acertos = 0, id = 0;
    int dTt = 0, outros = 0;

    for (int i = 0; i < 13; i++){
        printf("Insira 1, 0 ou 2: ");
        scanf("%d", &G[i]);
    }

    for (int k = 0; k < 10; k++){
        acertos = 0;

        printf("Insira o numero da cartela: ");
        scanf("%d", &id);

        for (int j = 0; j < 13;){
            printf("Insira 0, 1 ou 2: ");
            scanf("%d", &G[j];)

            if (R[j] == 0 || R[j] == 1 || R[j] == 2){
                if (G[j] == R[j]){
                    acertos++;
                }
                j++;
            }
        }

        AP[k][0] = id;
        AP[k][1] = acertos;
    }

    for (int l = 0; l < 10; l++){
        printf("Apostador %d com cartela %d acertou %d;\n", l, AP[l][0], AP[l][1]);
    }

    for (int m = 0; m < 10; m++){
        if (AP[l][1] >= 10){
            dTt++;
        }
        else{
            outros++;
        }
    }

    printf("porcentagem > 10 = %.2f\n", dTt/13);
    printf("porcentagem < 10 = %.2f", outros/13);
}

void e11(){
    int v[30], p[10], i[10], pp = 0, pi = 0;

    for (int i = 0; i < 30; i++){
        printf("Insira o numero: ");
        scanf("%d", &v[i]);
    }

    for (int j = 0; j < 30; j++){
        if (!(v[j]%2)){
            if(pp != 10){
                p[pp] = v[j];
                pp++;
            }
            else{
                printf("Pares = [");
                for (int k = 0; k < 10; k++){
                    printf("%d, ", p[k]);
                    p[k] = 0;
                }
                printf("].\n");
            }
        }
        else{
            if(pi != 10){
                i[pi] = v[j];
                pi++;
            }
            else{
                printf("Impares = [");
                for (int k = 0; k < 10; k++){
                    printf("%d, ", i[k]);
                    i[k] = 0;
                }
                printf("].\n");
                pi = 0;
            }
        }
    }
}

void e12(){
    int v[10], x[10], y[20];
    int menor = 0, menor;

    for (int i = 0; i < 10; i++){
        printf("Insira o numero: ");
        scanf("%d", &v[i]);

        y[i] = v[i];
    }

    for (int l = 0; l < 10; l++){
        printf("Insira o numero: ");
        scanf("%d", &x[l]);

        y[10 + l] = x[l];
    }

    for (int j = 0; j < 20; j++){
        menor = j;
        for (int k = j; k < 20; k++){
            if(y[menor] > y[k]){
                menor = k;
            }
        }
        tmp = y[menor];

        y[menor] = y[j];
        y[j] = y[menor];
    }

    printf("Lista = [");
    for (int l = 0; l < 10; l++){
        printf("%d, ", v[l]);
    }
    printf("].\n");
}

void e13(){
    int v[10], maior = 0, tmp;

    for (int i = 0; i < 10; i++){
        printf("Insira o numero: ");
        scanf("%d", &v[i]);
    }

    for (int j = 0; j < 10; j++){
        maior = j;
        for (int k = j; k < 10; k++){
            if(v[maior] < v[k]){
                maior = k;
            }
        }
        tmp = v[maior];

        v[maior] = v[j];
        v[j] = v[maior];
    }

    printf("Lista = [");
    for (int l = 0; l < 10; l++){
        printf("%d, ", v[l]);
    }
    printf("].\n");
}

int main(){

    return 0;
}