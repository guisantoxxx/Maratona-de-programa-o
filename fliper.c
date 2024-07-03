// https://neps.academy/br/exercise/87

#include <stdio.h>

int main() {

    int jogada1, jogada2;

    scanf("%d %d", &jogada1, &jogada2);

    if(jogada1 == 0) {
        printf("C\n");
    }
    else {
        if(jogada2 == 0) {
            printf("B\n");
        }
        else {
            printf("A\n");
        }
    }

    return 0;
}