// https://neps.academy/br/exercise/52

#include <stdio.h>

int main() {

    int lampadaA,lampadaB;
    int n_jogadas;
    int interruptor;

    lampadaA = lampadaB = -1; //apagadas 

    scanf("%d", &n_jogadas);

    for(int i = 0; i < n_jogadas; i++) {
        scanf("%d", &interruptor);

        if(interruptor == 1) {
            lampadaA *= -1; //primeiro interruptor troca estado da lampada A
        }
        else if(interruptor == 2) {
            lampadaA *= -1; //segundo interruptor troca estado de ambas
            lampadaB *= -1;
        }
    }

    if(lampadaA == 1) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    if(lampadaB == 1) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}