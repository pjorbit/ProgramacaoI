#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que converta uma velocidade expressa em
km/h para m/s e vice versa. Você deve criar um menu com as duas
de conversão e com uma opção para finalizar o programa. O usuario
poderá fazer quantas conversões desejar, sendo que o progama
só será finalizado quando a opção de finalizar for escolhida.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcaoUser=0;
    float velocidadeUser, km, ms;

    printf("CONVERSOR DE VELOCIDADE! \n");
    while (opcaoUser!=3) {
        printf("Escolha uma das opcoes \n");
        printf("1 - Km / Ms \n2 - Ms / Km \n3 - Sair do programa \n");
        scanf("%d", &opcaoUser);
        printf("Digite a velocidade desejada: ");
        scanf("%f", &velocidadeUser);
        if (opcaoUser==1) {
            ms = velocidadeUser * 3.6;
            printf("Sua velocidade convertida foi de: %.1f metros por segundo.\n", ms);
        } else if (opcaoUser==2) {
            km = velocidadeUser / 3.6;
            printf("Sua velocidade convertida foi de: %.1f quilometros por hora.\n", km);
        }
    }
    return 0;
}