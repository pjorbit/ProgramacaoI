#include <stdio.h>
#include <locale.h>

/*As berinjelas custam R$ 1,80 cada se forem compradas menos do que uma dúzia,
e R$1,55 se forem compradas pelo menos doze, a alface custam R$ 4,60 cada se
forem compradas menos do que uma dúzia, e R$3,45 se forem compradas pelo
menos doze. Escreva um programa que leia o número de berinjelas e alfaces
compradas, calcule e escreva o valor total da compra.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int berinjelas, alfaces;

    printf("Quantas berinjelas deseja comprar? \n");
    scanf("%d", &berinjelas);
    printf("Quantas alfaces deseja comprar? \n");
    scanf("%d", &alfaces);
    if(berinjelas<12&&alfaces<12) {
        float respos;
        respos = ((berinjelas * 1.80)+(alfaces * 4.60));
        printf("Sua compra foi de: R$%.2f", respos);
    } else if(berinjelas>=12&&alfaces<12) {
        float respos;
        respos = ((berinjelas * 1.55)+(alfaces * 4.60));
        printf("Sua compra foi de: R$%.2f", respos);
    } else if(berinjelas<12&&alfaces>=12) {
        float respos;
        respos = ((berinjelas * 1.80)+(alfaces * 3.45));
        printf("Sua compra foi de: R$%.2f", respos);
    } else if(berinjelas>=12&&alfaces>=12) {
        float respos;
        respos = ((berinjelas * 1.55)+(alfaces * 3.45));
        printf("Sua compra foi de: R$%.2f", respos);
    }
    return 0;
}