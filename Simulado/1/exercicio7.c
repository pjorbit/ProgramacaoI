#include <stdio.h>
#include <locale.h>

/*Codifique um programa em C que solicite a altura de uma pessoa para cálculo do seu peso
ideal. Além da altura, o programa também deve solicitar que o usuário indique se é homem (1)
ou mulher (2). Poderá utilizar neste programa o switch, conforme o sexo da pessoa efetuará
um calculo conforma a formula a abaixo:
● Homens: (72.7 * altura) - 58
● Mulheres: (62.1 * altura) - 44.7
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    float alturaUser, pesoIdeal;
    int opcaoUser;

    printf("Entre com sua altura: \n");
    scanf("%f", &alturaUser);
    printf("Voce e [1]homem ou [2]mulher? \n");
    scanf("%d", &opcaoUser);
    switch (opcaoUser) {
    case 1:
        pesoIdeal = ((72.7 * alturaUser)-58);
        printf("Seu peso ideal seria: %.2fKg", pesoIdeal);
        break;
    case 2:
        pesoIdeal = ((62.1 * alturaUser)-44.7);
        printf("Seu peso ideal seria: %.2fKg", pesoIdeal);
    default:
        printf("Numero invalido!");
        break;
    }



    return 0;
}