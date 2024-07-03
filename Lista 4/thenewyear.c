//https://codeforces.com/problemset/problem/723/A

#include <stdio.h>

int main() {

    int numeros, maximo, min;

    maximo = 0;
    min = 101;

    for(int i = 0; i < 3; i++) {
        scanf("%d", &numeros);

        if(numeros > maximo) {
            maximo = numeros;
        }

        if(numeros < min) {
            min = numeros;
        }
    }

    printf("%d\n", maximo - min);

    return 0;
}