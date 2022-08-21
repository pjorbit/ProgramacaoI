#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

    float largura, altura, comprimento, areaJnl, areaPrt;

    return 0;
}

/*Escreva um programa para ler as dimensões de uma cozinha retangular
(comprimento, largura e altura), calcular e escrever a quantidade de caixas
de azulejos para se colocar em todas as suas paredes (considere que não
será descontada a área ocupada por portas e janelas). Cada caixa de
azulejos possui 1,5 m2. Multiplicar a largura de cada parede pela altura
do ambiente, e subtrair a área de portas ou janelas que existirem em cada
uma delas, pois elas não receberão revestimento. Em seguida, basta
somar os 5% de margem de erro.*/