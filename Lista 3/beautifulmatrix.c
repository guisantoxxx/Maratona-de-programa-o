#include <stdio.h>

int main() {

    int matriz[5][5];
    int posicao_i, posicao_j;
    int movimentos = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5;j++) {
            scanf("%d", &matriz[i][j]);

            if(matriz[i][j] == 1) {
                posicao_i = i;
                posicao_j = j;
            }
        }
    }


    while(posicao_i != 2 || posicao_j != 2) {
        if(posicao_i != 2) {

            if(posicao_i < 2) {
                matriz[posicao_i][posicao_j] = 0;
                matriz[posicao_i + 1][posicao_j] = 1;

                posicao_i++;
                movimentos++;
            }
            else if(posicao_i > 2) {
                matriz[posicao_i][posicao_j] = 0;
                matriz[posicao_i - 1][posicao_j] = 1;

                posicao_i--;
                movimentos++;
            }
        }
        else if(posicao_j != 2) {

            if(posicao_j < 2) {
                matriz[posicao_i][posicao_j] = 0;
                matriz[posicao_i ][posicao_j + 1] = 1;

                posicao_j++;
                movimentos++;
            }
            else if(posicao_j > 2) {
                matriz[posicao_i][posicao_j] = 0;
                matriz[posicao_i][posicao_j - 1] = 1;

                posicao_j--;
                movimentos++;
            }
        }
    }

    printf("%d\n", movimentos);
    

    return 0;
}