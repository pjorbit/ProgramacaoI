#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

/*Um estudo sobre sensibilidade de pessoas a temperaturas da água
identificou que a maioria das pessoas considera fria a água com
temperaturas abaixo de 25 graus, morna entre 25 e 30 graus, e quente
acima de 30 graus. Escreva um algoritmo na forma de fluxograma que
mostre as palavras "fria", "morna" ou "quente" dependendo da
temperatura da água que for informada. Implemente o algoritmo na
forma de um programa C.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    float temperatura;

    printf("Qual a temperatura da agua? ");
    scanf("%f", &temperatura);
    if (temperatura<25) {
        printf("Sua agua esta fria!");
    } else if(temperatura<=30) {
        printf("Sua agua esta morna!");
    } else if(temperatura>30) {
        printf("Sua agua esta quente!");
    }
    
    return 0;
}