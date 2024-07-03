// https://codeforces.com/problemset/problem/1850/D

#include <stdio.h>
#include<stdlib.h>  


int comparacao(const void* a, const void* b) { //funcao de comparacao para a funcao de ordenacao qsort
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    
    if(num1 < num2) {
        return -1;
    }
    else if(num1 == num2) {
        return 0;
    }
    else {
        return 1;
    }
}


int main() {

    int t, n, k;
    int numeros[200000];

    scanf("%d", &t);

    for(int i = 0; i < t; i++) {

        scanf("%d %d", &n, &k);

        for(int j = 0; j < n; j++) {
            
            scanf("%d", &numeros[j]);
        }

        qsort(numeros, n, sizeof(int), comparacao);

        int maior_subgrupo = 0;
        int contador = 1;

        for(int j = 0; j < n; j++) { //laco que encontra o maior subgrupo no array

            if(numeros[j + 1] - numeros[j] <= k && j != n - 1) {
                contador++;
            }
            else {
                
                if(maior_subgrupo < contador) {
                    maior_subgrupo = contador;
                }
                
                contador = 1;
            }
        }

       printf("%d\n", n - maior_subgrupo);
        
    }

    return 0;
}

