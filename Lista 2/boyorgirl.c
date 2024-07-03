//https://codeforces.com/contest/236/problem/A

#include <stdio.h>

int main() {
    char username[100];
    int qtd_caracteres_diferentes = 0;
    int vetor_ascii[255];

    scanf("%s", username);

    for(int i = 0; i < 255; i++) { //criou um vetor do tamanho da tabela ascii e setou todos os valores para 0
        vetor_ascii[i] = 0;
    }


    for(int i = 0; username[i] != '\0'; i++) {
        int posicao_numerica = username[i]; //definiu os campos dos caracteres do username como 1 no vetor da ascii
        vetor_ascii[posicao_numerica] = 1;
    }

    for(int i = 0; i < 255; i++) {
        qtd_caracteres_diferentes += vetor_ascii[i]; // contou q qtd de caracteres distintos
    }
    
    if(qtd_caracteres_diferentes % 2 == 0) {
        printf("CHAT WITH HER!\n");
    }
    else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}