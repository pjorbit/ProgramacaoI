#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numSemana;

    printf("Entre com um n�mero de 1 � 7: \n");
    scanf("%d", &numSemana);

    switch (numSemana) {
        case 1:
            printf("Voce escolheu a segunda-feira!");
            break;
        case 2:
            printf("Voce escolheu a ter�a-feira!");
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
            printf("Voce escolheu o s�bado!");
            break;
        case 7:
            printf("Voce escolheu o domingo!");
            break;
        default:
            printf("Esse n�o � um n�mero v�lido");
            break;
        }
    return 0;
}