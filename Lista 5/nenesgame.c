//https://codeforces.com/problemset/problem/1956/A


#include <stdio.h>

int main() {

    int n_testes, tam_sequencia_a, n_testes_jogadores;
    int sequencia_a[100];

    scanf("%d", &n_testes); //primeiro da a entrada do numero de testes

    for(int i = 0; i < n_testes; i++) {

        scanf("%d %d", &tam_sequencia_a, &n_testes_jogadores); //depois da a entrada do tamanho da sequencia A e o numero de vezes que serao testadas qtd diferentes de jogadores

        for(int j = 0; j < tam_sequencia_a; j++) { //depois le-se a sequencia a do teste ( essa sequencia sao as posicoes que elminarao os jogadores)

            scanf("%d", &sequencia_a[j]);
        }

        for(int j = 0; j < n_testes_jogadores; j++) { //nesse laço realiza-se todos os testes com diferentes numeros de jogadores
            int n_jogadores_atuais; 

            scanf("%d", &n_jogadores_atuais);

            int aux_n_jogadores = n_jogadores_atuais; //o numero de jogadores é salvo numa variavel auxiliar para depois obter a saida do teste

            int flag = 1; //a variavel flag é utilizada para verificar se o jogo acaba

            while(flag == 1) {

                flag = 0;

                for(int k = 0; k < tam_sequencia_a; k++) {

                    if(sequencia_a[k] <= aux_n_jogadores) { //se existe algum jogador numa posicao eliminatoria, esse jogador é removido e o jogo continua, se não há nenhum, o jogo acaba
                        aux_n_jogadores--;
                        flag = 1;
                    }
                }
            }

            printf("%d ", aux_n_jogadores);
        }

        printf("\n");

    }

    return 0;
}