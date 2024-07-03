#include <stdio.h>
#include <string.h>

int main() {

    int qtd;
    int contagem = 0;
    char comando[150][10];
    int cont_soma, cont_sub;

    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++) {
        scanf("\n%c%c%c", &comando[i][0], &comando[i][1], &comando[i][2]);

        cont_soma = cont_sub = 0;

        
       
        for(int j = 0; j < 3; j++) {
            if(comando[i][j] == '+') {
                cont_soma++;
            }
            else if(comando[i][j] == '-') {
                cont_sub++;
            }
        }

        

        if(cont_soma == 2) {
            contagem++;
        }
        else if(cont_sub == 2) {
            contagem--;
        }
    }

    printf("%d\n", contagem);

    return 0;
}