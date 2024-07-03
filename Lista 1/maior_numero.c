#include <stdio.h>

int main() {

    int numero, maior_numero;

    maior_numero = numero = -1;

    while(numero != 0) {
        scanf("%d", &numero);

        if(numero > maior_numero) {
            maior_numero = numero;
        }
    }

    printf("%d\n",maior_numero);

    return 0;
}