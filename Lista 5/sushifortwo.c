//https://codeforces.com/problemset/problem/1138/A

#include <stdio.h>

int main() {

    int n_pecas, pecas[100000];

    scanf("%d", &n_pecas);

    for(int i = 0; i < n_pecas; i++) {
        scanf("%d", &pecas[i]);
    }

    int tipo_atual = pecas[0];
    int maior_sequencia = 0;
    int contador1, contador2;

    contador1 = contador2 = 0;

    for(int i = 0; i < n_pecas; i++) {

        if(pecas[i] != tipo_atual && contador1 != 0 && contador2 != 0) { //se a peça atual é diferente da anterior e nao está na primeira iteracao, ele zera o contador da nova peça a ser contada para verificar a nova sequencia

            if(tipo_atual == 1) {
                contador2 = 0;
            }
            else {
                contador1 = 0;
            }     
        }

        if(pecas[i] != tipo_atual) { //faz a troca da peca atual
            tipo_atual = pecas[i];
        }

        if(pecas[i] == tipo_atual && pecas[i] == 1) { //aumenta o contador da peça atual
            contador1++;
        }
        else if(pecas[i] == tipo_atual && pecas[i] == 2) {
            contador2++;
        }

        if(contador1 >= contador2 && contador2 > maior_sequencia) { //se o contador for maior que a sequencia maior atual, e for menor do que o outro contador, ele é salvo na maior_sequencia
            maior_sequencia = contador2;                            //é salvo o menor dos dois contadores para cumprir os requisitos do problema
        }
        else if(contador1 <= contador2 && contador1 > maior_sequencia) {
            maior_sequencia = contador1;
        }

    }

    printf("%d\n",maior_sequencia * 2);//ja que as duas sequencias, de 1s e de 2s sao iguais, multiplica-se a maior sequencia por 2

    return 0;
}