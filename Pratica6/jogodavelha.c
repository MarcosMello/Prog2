#include <stdio.h>

char matrix [3][3] = {' ', ' ', ' ',
                      ' ', ' ', ' ',
                      ' ', ' ', ' '};

void disp_matrix(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf(" %c ", matrix[i][j]);
            if (j != 2){
                printf("|");
            }
        }
        if (i != 2){
            printf("\n-----------\n");
        }
        else{
            printf("\n");
        }
    }
}

int get_computer_move(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(matrix[i][j] == ' '){
                matrix[i][j] = 'O';
                return 1;
            }
        }
    }

    return 0;
}

void get_player_move(){
    int i, j;

    do{
        printf("Digite sua posicao (linha coluna): ");
        scanf("%d %d", &i, &j);
    }while((i < 1 || i > 3) || (j < 1 || j > 3) || matrix[i-1][j-1] != ' ');

    matrix[i-1][j-1] = 'X';
}

char check(){
    for (int i = 0; i < 3; i++){
        if (matrix[i][0] != ' ' && matrix[i][0] == matrix[i][1] && matrix[i][1] == matrix[i][2]){
            return matrix[i][0];
        }
        if (matrix[0][i] != ' ' && matrix[0][i] == matrix[1][i] && matrix[1][i] == matrix[2][i]){
            return matrix[0][i];
        }
    }

    if (matrix[0][0] != ' ' && matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2]){
        return matrix[0][0];
    }
    if (matrix[0][2] != ' ' && matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0]){
        return matrix[0][2];
    }

    return ' ';
}

int main(){
    int tie = 0;
    char resp = ' ';

    do{
        disp_matrix();
        get_player_move();
        resp = check();

        if (resp != ' '){
            disp_matrix();
            printf("%c venceu!\n", resp);
        }
        else if (get_computer_move() == 0){
            tie = 1;
            disp_matrix();
            printf("Deu velha!\n");
        }
        else{
            resp = check();

            if(resp != ' '){
                disp_matrix();
                printf("%c venceu!\n", resp);
            }
        }

    }while((resp != 'X' && resp != 'O') && !tie);

    return 0;
}