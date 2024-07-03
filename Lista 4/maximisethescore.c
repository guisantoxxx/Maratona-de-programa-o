//https://codeforces.com/problemset/problem/1930/A

#include <stdio.h>

int main() {

    int t, n, numeros[100];

    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        
        scanf("%d", &n);

        int score = 0;

        for(int j = 0; j < 2 * n; j++) {
            scanf("%d", &numeros[j]);
        }

        for(int j = 0; j < 2 * n; j++) {
            for(int k = 0; k < (2 * n) - 1; k++) {
                if(numeros[k] > numeros[k + 1]) {
                    int aux = numeros[k];
                    numeros[k] = numeros[k +  1];
                    numeros[k + 1] = aux;
                }
            }
        }

        
        
        int indice_aux = 0;

        for(int j = 0; j < n; j++, indice_aux +=2) {
            
            if(numeros[indice_aux] > numeros[indice_aux + 1]) {
                score += numeros[indice_aux + 1];
            }
            else {
                score += numeros[indice_aux];
            }
        }

        printf("%d\n", score);
    }
    return 0;
}