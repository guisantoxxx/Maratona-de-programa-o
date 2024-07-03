//https://codeforces.com/contest/228/problem/A

#include <stdio.h>

int main() {

    int sapatos[4];

    for(int i = 0; i < 4; i++) {
        scanf("%d", &sapatos[i]);
    }

    int contador = 0;
    int cor_alternativa = -1;

    for(int i = 0; i < 4; i++) { //laço duplo verificando cada combinação de sapatos a partir do primeiro
        for(int j = i + 1; j < 4; j++) {
            if(sapatos[i] == sapatos[j]) { //se as cores forem iguais, o contador de qtdde cores aumenta e a cor é trocada por uma que nao ira se repetir
                contador++;
                sapatos[j] = cor_alternativa;
                cor_alternativa--;
            }
        }
    }

    printf("%d\n", contador);

    return 0;
}