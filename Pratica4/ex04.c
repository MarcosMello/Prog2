#include <stdio.h>

float media(float x, float y, float z){
    return (x + y + z)/3;
}

int main(){
    int mat;
    float x, y, z;

    do{
        do{
            printf("Insira a matricula: ");
            scanf("%d", &mat);
        }while((mat < 1 || mat > 9999) && mat != -1);

        if (mat != -1){
            printf("Insira as notas do aluno separadas por um espaco: ");
            scanf("%f %f %f", &x, &y, &z);

            printf("Media do aluno %d: %.2f\n", mat, media(x, y, z));
        }
    }while(mat != -1);

    return 0;
}