//https://codeforces.com/contest/732/problem/A

#include <stdio.h>

int main() {

    int preco_pa, valor_moeda, preco_pa_aux;

    scanf("%d %d", &preco_pa, &valor_moeda);

    int flag = 0; //a flag serve para avisar quando a qtd de pás foi encontrada
    int contador = 0; //o contador serve pra ir aumentando a qtd de pas ate chegar na resposta certa
    preco_pa_aux = preco_pa;

    while(flag == 0) {
        
        contador++; //o contador aumenta a cada laço inicaido, indicando uma pá a mais a ser analisada

        int resto;

        resto = (preco_pa_aux % 10); //na variavel resto é salvo quanto falta em moedas apos utilizar as infinitas moedas de 10


        if(resto == 0) { //se o resto ja for 0, q qtd de pas ja foi encontrada
            flag = 1;
        }
        else if(resto - valor_moeda == 0) { //se for igual ao valor da moeda diferente, o problema esta resolvido
            flag = 1;
        }
        

        preco_pa_aux += preco_pa; //se nao for igual, o preco da pa aumenta para acompanhar a qtd de pas que esta sendo analisada
    }

    printf("%d\n", contador);

    return 0;
}