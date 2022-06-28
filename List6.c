#include <stdio.h>

void ex1(){
    float S[6][6], V[36], A;

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            printf("S[%d][%d] = ", i, j);
            scanf("%f", &S[i][j]);
        }
    }

    printf("A = ");
    scanf("%f", &A);

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            V[i*6+j] = S[i][j]*A;
        }
    }

    for (int t = 0; t < 36; t++){
        printf("V[%d] = %f\n", t, V[t]);
    }
}

void ex2(){
    float M[5][5];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("M[%d][%d] = ", i, j);
            scanf("%f", &M[i][j]);

            if (M[i][j] < 0){
                M[i][j] *= -1;
            }
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("M[%d][%d] = %f\n", i, j, M[i][j]);
        }
    }
}

void ex3(){
    float MC[25], M[5][5], tmp;
    int menor;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("M[%d][%d] = ", i, j);
            scanf("%f", &M[i][j]);

            MC[i*5+j] = M[i][j];
        }
    }

    for (int i = 0; i < 25; i++){
        menor = i;
        for (int j = 0+i; j < 25; j++){
            if (MC[j] < MC[menor]){
                menor = j;
            }
        }

        if (i != menor){
            tmp = MC[i];
            MC[i] = MC[menor];
            MC[menor] = tmp;
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = (i*5); j < ((5*i) + 5); j++){
            printf("%.2f ", MC[j]);
        }
        printf("\n");
    }
}

void ex4(){
    int A[26][10], maior[2] = {0, 0}, soma = 0;

    for (int i = 0; i < 26; i++){
        soma += A[i][0];
        for (int j = 0; j < 10; j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);

            if (A[i][j] > A[maior[0]][maior[1]]){
                maior[0] = i;
                maior[1] = j;
            }
        }
    }

    float media = soma/26.0;

    printf("A maior população e a da cidade nº %d, do estado %d.\n", maior[1]+1, maior[0]+1);
    printf("A media das capitais e %.2f\n", media);
}

void ex5(){
    int m, n, s = 0, linhas = 0, colunas = 0;

    printf("M e N = ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (A[i][j] != 0){
                break;
            }

            s += 1;
        }

        if (s == (n-1)){
            linhas += 1;
        }

        s = 0;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (A[j][i] != 0){
                break;
            }

            s += 1;
        }

        if (s == (m-1)){
            colunas += 1;
        }

        s = 0;
    }

    printf("Tem %d linhas e %d colunas nulas.\n", linhas, colunas);
}

void ex6(){
    char gab[10], al[100][10];
    int resultado[100];

    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 10; j++){
            do{
                printf("Q.[%d] Aluno[%d] = ", j, i);
                scanf("%c", &al[i][j]);
            }while(al[i][j] != "a" && al[i][j] != "b" && al[i][j] != "c" && al[i][j] != "d");
        }
    }

    for (int i = 0; i < 10; i++){
        do{
            printf("Gabarito[%d] = ", i);
            scanf("%c", &gab[i]);
        }while(gab[i] != "a" && gab[i] != "b" && gab[i] != "c" && gab[i] != "d");
    }

    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 10; j++){
            if (al[i][j] == gab[j]){
                resultado[i] += 1;
            }
        }
    }

    for (int i = 0; i < 100; i++){
        printf("Aluno[%d] = %d\n", i, resultado[i]);
    }
}

void ex7(){
    float M[5][5], Sl[5] = {0, 0, 0, 0, 0}, Sc[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("M[%d][%d] = ", i, j);
            scanf("%f", &M[i][j]);

            Sc[i] += M[i][j];
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            Sl[j] += M[j][i];
        }
    }

    for (int i = 0; i < 5; i++){
        printf("Soma linha[%d] = %f\n", i, Sl[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("Soma coluna[%d] = %f\n", i, Sc[i]);
    }
}

void ex8(){
    float l1[10][10], l2[10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("l1[%d][%d] = ", i, j);
            scanf("%f", &l1[i][j]);
        }
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("l1[%d][%d] = ", i, j);
            scanf("%f", &l1[i][j]);
        }
    }

    for (int i = 0; i < 10; i++){
        for (int j = i+1; j < 10; j++){
            l2[10-i][j-i] = l1[i][j];
        }
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("l2[%d][%d] = %f\n", i, j, l2[i][j]);
        }
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("l1[%d][%d] = %f\n", i, j, l1[i][j]);
        }
    }
}

void ex9(){
    int c[6][6], dist, cam[6];

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            printf("c[%d][%d] = ", i, j);
            scanf("%d", &c[i][j]);
        }
    }

    for (int i = 0; i < 6; i++){
        printf("Cam[%d] = ", i);
        scanf("%d", &cam[i]);
    }

    for (int i = 0; i < 5; i++){
        dist += c[cam[i]][cam[i+1]];
    }

    printf("Distancia = %d\n", dist);
}

void ex10(){
    int n;

    printf("N = ");
    scanf("%d", &n);

    int A[n][n], sum = 0, sum2 = 0, count = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%i", &A[i][j]);
        }
    }

    for (int i = 0; i < n; i++){
        sum = A[0][i];
    }

    for (int i = 1; i < n; i++){
        for (int j = 0; j < n; j++){
            sum2 += A[i][j];
        }

        if (sum2 != sum){
            printf("Nao e magico");
            break;
        }

        count += 1;
        sum2 = 0;
    }

    if (count == (n-1)){
        count = 0;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                sum2 += A[j][i];
            }

            if (sum2 != sum){
                printf("Nao e magico");
                break;
            }

            count += 1;
            sum2 = 0;
        }

        if (count == (n-1)){
            count = 0;

            for (int i = 0; i < n; i++){
                sum2 += A[i][i];
            }

            if (sum2 != sum){
                printf("Nao e magico");
            }
            else{
                sum2 = 0;
                count = (n-1);
            }

            if (count == (n-1)){
                count = 0;

                for (int i = 0; i < n; i++){
                sum2 += A[i][i];
                }

                if (sum2 != sum){
                    printf("Nao e magico");
                }
                else{
                    printf("E magico");
                }
            }
        }
    }
}

void ex11(){
    int maior[2] = {0, 0}, menor[2] = {0, 0};
    float A[10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%f", &A[i][j]);

            if (A[i][j] > A[maior[0]][maior[1]]){
                maior[0] = i;
                maior[1] = j;
            }
        }
    }

    menor[0] = maior[0];

    for (int i = 0; i < 10; i++){
        if (A[menor[0]][i] < A[menor[0]][menor[1]]){
            menor[1] = i;
        }
    }

    printf("Minimax = %.2f\n", A[menor[0]][maior[1]]);
    printf("Posicao: %d %d", menor[0], menor[1]);
}

void ex12(){
    float A[10][4], B[4][3], C[10][3], sum;
    int count = 0;

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 4; j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf("B[%d][%d] = ", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    for (int i = 0; i < 10; i++){
        for (int k = 0; k < 3; k++){
            for (int l = 0; l < 4; l++){
                sum += A[i][l] * B[l][k];
            }

            C[i][k] = sum;
            sum = 0;
        }
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 3; j++){
            printf("C[%d][%d] = %.2f\n", i, j, C[i][j]);
        }
    }
}

void ex13(){
    float M[7][7], sum = 0;

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            printf("M[%d][%d] = ", i, j);
            scanf("%f", &M[i][j]);
        }
    }

    for (int i = 0; i < 7; i++){
        sum += M[2][i];
    }

    printf("Soma L3 = %.2f\n", sum);

    sum = 0;

    for (int i = 0; i < 7; i++){
        sum += M[i][4];
    }

    printf("Soma C5 = %.2f\n", sum);

    sum = 0;

    for (int i = 0; i < 7; i++){
        for (int j = i+1; j < 7; j++){
            sum += M[i][j];
        }
    }

    printf("Soma TSD = %.2f\n", sum);

    sum = 0;

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7 - (i+1); j++){
            sum += M[j][i];
        }
    }

    printf("Soma TSE = %.2f\n", sum);

    sum = 0;

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            sum += M[i][j];
        }
    }

    printf("Soma T = %.2f\n", sum);

    sum = 0;

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < i; j++){
            sum += M[i][j];
        }
    }

    printf("Soma TIE = %.2f\n", sum);

    sum = 0;

    for (int i = 0; i < 7; i++){
        for (int j = (7-i); j < 7; j++){
            sum += M[i][j];
        }
    }

    printf("Soma TID = %.2f\n", sum);

    sum = 0;

    for (int i = 0; i < 3; i++){
        for (int j = i+1; j < (7-(i+1)); j++){
            sum += M[i][j];
        }
    }

    printf("Soma T4C = %.2f\n", sum);

    sum = 0;

    for (int i = 1; i < 6; i++){
        for (int j = 0; j < 3; j++){
            if ((i != j) && ((i + j) != 6)){
                sum += M[i][j];
            }
            else{
                break;
            }
        }
    }

    printf("Soma T4E = %.2f\n", sum);
}