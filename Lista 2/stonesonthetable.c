// https://codeforces.com/contest/266/problem/A

#include <stdio.h>

int main() {
    
    int n_pedras;
    char pedras[50];
    int qtd_retiradas = 0;

    scanf("%d", &n_pedras);
    scanf("%c", &pedras[0]);

    for(int i = 0; i < n_pedras; i++) {
        scanf("%c", &pedras[i]);
    }

    for(int i = 0; i < n_pedras - 1; i++) { 
        if(pedras[i] == pedras[i + 1]) {    
            qtd_retiradas++;
        }
    }

    printf("%d\n", qtd_retiradas);


    return 0;
}