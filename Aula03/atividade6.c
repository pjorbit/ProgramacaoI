#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

    float largura, altura, comprimento, areaJnl, areaPrt;

    return 0;
}

/*Escreva um programa para ler as dimens�es de uma cozinha retangular
(comprimento, largura e altura), calcular e escrever a quantidade de caixas
de azulejos para se colocar em todas as suas paredes (considere que n�o
ser� descontada a �rea ocupada por portas e janelas). Cada caixa de
azulejos possui 1,5 m2. Multiplicar a largura de cada parede pela altura
do ambiente, e subtrair a �rea de portas ou janelas que existirem em cada
uma delas, pois elas n�o receber�o revestimento. Em seguida, basta
somar os 5% de margem de erro.*/