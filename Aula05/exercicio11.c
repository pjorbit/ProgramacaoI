#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numMes;

    printf("Entre com um número de 1 a 12: \n");
    scanf("%d", &numMes);

    switch (numMes) {
        case 1:
            printf("Voce escolheu o mes de Janeiro!");
            break;
        case 2:
            printf("Voce escolheu o mes de Feveireiro!");
            break;
        case 3:
            printf("Voce escolheu o mes de Marco!");
            break;
        case 4:
            printf("Voce escolheu o mes de Abril!");
            break;
        case 5:
            printf("Voce escolheu o mes de Maio!");
            break;
        case 6:
            printf("Voce escolheu o mes de Junho!");
            break;
        case 7:
            printf("Voce escolheu o mes de Julho!");
            break;
        case 8:
            printf("Voce escolheu o mes de Agosto!");
            break;
        case 9:
            printf("Voce escolheu o mes de Setembro!");
            break;
        case 10:
            printf("Voce escolheu o mes de Outubro!");
            break;
        case 11:
            printf("Voce escolheu o mes de Novembro!");
            break;
        case 12:
            printf("Voce escolheu o mes de Dezembro!");
            break;
        default:
            printf("Entre com um numero valido!");
            break;
        }

    return 0;
}