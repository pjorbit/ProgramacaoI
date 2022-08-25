#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numSemana;

    printf("Entre com um número de 1 á 7: \n");
    scanf("%d", &numSemana);

    switch (numSemana) {
        case 1:
            printf("Voce escolheu a segunda-feira!");
            break;
        case 2:
            printf("Voce escolheu a terça-feira!");
            break;
        case 3:
            printf("Voce escolheu a quarta-feira!");
            break;
        case 4:
            printf("Voce escolheu a quinta-feira!");
            break;
        case 5:
            printf("Voce escolheu a sexta-feira!");
            break;
        case 6:
            printf("Voce escolheu o sábado!");
            break;
        case 7:
            printf("Voce escolheu o domingo!");
            break;
        default:
            printf("Esse não é um número válido");
            break;
        }
    return 0;
}