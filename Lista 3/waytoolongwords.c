#include <stdio.h>
#include <string.h>



int main() {

    int qtd;
    char palavra[100];
    char abrevicao[10];
    char aux_num[3];

    scanf("%d\n", &qtd);

    for(int i = 0; i < qtd; i++) {
        scanf("%s", palavra);

        if(strlen(palavra) <= 10) {
            printf("%s\n", palavra);
        }
        else {
            for(int i = 0; i < 10; i++) {
                
                abrevicao[i] = '\0';
            }

            abrevicao[0] = palavra[0];

            int qtd_caracteres = strlen(palavra) - 2;

            sprintf(aux_num, "%d", qtd_caracteres);

            strcat(abrevicao, aux_num);

            int aux_qtd = strlen(abrevicao);

            abrevicao[aux_qtd] = palavra[strlen(palavra) - 1];

            printf("%s\n", abrevicao);
        }
    }

    return 0;
}
