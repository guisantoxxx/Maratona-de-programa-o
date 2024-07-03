
#include <stdio.h>

int main() {

    int n_amigos, tamanho_cerca;
    int alturas[1000];
    int largura_minima = 0;

    scanf("%d %d", &n_amigos, &tamanho_cerca);

    for(int i =0; i < n_amigos; i++) {
        scanf("%d", &alturas[i]);

        if(alturas[i] > tamanho_cerca) {
            largura_minima += 2;
        }
        else {
            largura_minima += 1;
        }
    }

    printf("%d\n", largura_minima);


    return 0;
}