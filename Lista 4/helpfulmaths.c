//https://codeforces.com/problemset/problem/339/A

#include <stdio.h>
#include <string.h>

int main() {

    char operacao[100];

    scanf("%s", operacao);

    for(int i = 0; i < strlen(operacao); i++) {
        for(int j = i; j < strlen(operacao); j++) {
            if(j != i && operacao[j]!= '+' && operacao[i] != '+') {
                if(operacao[j] < operacao[i]) {
                    char aux = operacao[j];
                    operacao[j] = operacao[i];
                    operacao[i] = aux;
                }
            }
        }
    }

    printf("%s\n", operacao);

    return 0;
}