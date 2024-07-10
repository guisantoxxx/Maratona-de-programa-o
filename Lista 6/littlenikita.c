//https://codeforces.com/contest/1977/problem/A

#include <stdio.h>

int main() {

    int n_testes, n_movimentos, n_cubos_desejados;

    scanf("%d", &n_testes);

    for(int i = 0; i < n_testes; i++) {

        scanf("%d %d", &n_movimentos, &n_cubos_desejados);

        int qtd_pilha = 0;

        for(int i = 0; i < n_movimentos; i++) {
            if(qtd_pilha < n_cubos_desejados) {
                qtd_pilha++; //se a pilha atual for menor do que a desejada, adiciona-se um cubo ao topo da pilha
            }
            else {
                qtd_pilha--; //se for igual a qtd desejada, remove-se um cubo do topo
            }
        }

        if(qtd_pilha == n_cubos_desejados) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }

    return 0;
}