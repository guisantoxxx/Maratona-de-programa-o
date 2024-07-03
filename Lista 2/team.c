// https://codeforces.com/contest/231/problem/A

#include <stdio.h>

int main() {

    int n_problemas;
    int decisoes[1000][3];
    int qtd_resolvidos = 0;

    scanf("%d", &n_problemas);

    for(int i = 0; i < n_problemas; i++) {
        scanf("%d %d %d", &decisoes[i][0], &decisoes[i][1], &decisoes[i][2]);

        if(decisoes[i][0] + decisoes[i][1] + decisoes[i][2] >= 2) {
            qtd_resolvidos++;
        }
    }

    printf("%d\n", qtd_resolvidos);

    

    return 0;
}