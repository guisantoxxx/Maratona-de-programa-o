//https://codeforces.com/problemset/problem/1933/A

#include <stdio.h>

int main() {

    int t, n, a[50];

    scanf("%d", &t);

    for(int i = 0; i < t; i++) {

        scanf("%d", &n);

        for(int j = 0; j < n; j++) {

            scanf("%d", &a[j]);
        }

        int flag_ordenado = 1;  //esta variavel é usada para verificar se o array ja esta ordenado

        for(int j = 0; j < n - 1; j++) {
            if(a[j] < a[j + 1]) {
                flag_ordenado = 0; //se nao estiver, é marcado como 0
            }
        }

        if(flag_ordenado == 0) {
            for(int i = 0; i < n; i++) {   //ordenacao do array usando bubble sort
                for(int j = 0; j < n - 1; j++) {
                    if(a[j] < a[j + 1]) {
                        int aux = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = aux;
                    }
                }
            }
        }

        int t = 0;

        for(int i = 0; i < n; i++) {  //com o array já  ordenado, ele muda os sinais de todos os elementos negativos para que se tornem positivos
            
            if(a[i] < 0) {
                t = 1;
            }

            if(t == 1) {
                a[i] *= -1;
            }
        }

        int somatorio = 0;

        for(int i = 0; i < n; i++) { //com os sinais trocados, ele realiza o somatorio
            
            somatorio += a[i];
        }
        
        printf("%d\n", somatorio);
    }

    return 0;
}