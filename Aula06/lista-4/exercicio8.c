#include <stdio.h>
#include <locale.h>

/*Escreva um programa que informe o valor de uma corrida de taxi. Para
calcular o valor da corrida é necessário saber a distância percorrida em
quilômetros e qual o tipo da bandeira da corrida, 1 ou 2. Caso a bandeira seja
1, o preço do quilometro percorrido é de R$ 10,80, se a bandeira for 2 o valor é
de R$ 12,30. Escreva um programa em linguagem C que solicite a distância
percorrida em quilômetros e qual o tipo da bandeira da corrida e informe o valor
da corrida.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int bandeira;
    float distanciaCorrida, preco;

    printf("Por favor, escolha qual a bandeira da corrida. \n");
    printf("1 - R$10,80 por Km \n");
    printf("2 - R$12,30 por Km \n");
    scanf("%d", &bandeira);
    printf("Qual a distancia(em Km), da corrida? \n");
    scanf("%f", &distanciaCorrida);
    if(bandeira == 1) {
        preco = distanciaCorrida * 10.80;
        printf("O preco da corrida foi de: R$%.2f", preco);
    } else if(bandeira == 2) {
        preco = distanciaCorrida * 12.30;
        printf("O preco da corrida foi de: R$%.2f", preco);
    } else {
        printf("Entre com um numero valido!!");
    }

    return 0;
}
