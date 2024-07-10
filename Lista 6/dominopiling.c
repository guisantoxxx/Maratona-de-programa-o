//https://codeforces.com/problemset/problem/50/A

#include <stdio.h>

int main() {

    int N,M;

    scanf("%d %d", &M, &N);

    int tamanho_tabuleiro = M * N;

    int qtd_dominos = tamanho_tabuleiro / 2; //2 é o tamanho ocupado por cada domino

    printf("%d\n", qtd_dominos);

    return 0;
}