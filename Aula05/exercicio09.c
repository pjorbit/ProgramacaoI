#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int alternativa;
    float num1, num2, soma, sub, div, mult;

    printf("Digite o primeiro valor e em seguida o segundo: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    printf("Agora escolha uma alternativa\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &alternativa);
    switch (alternativa)
    {
    case 1:
        soma = num1 + num2;
        printf("Sua soma foi de: %.1f", soma);
        break;
    case 2:
        sub = num1 - num2;
        printf("Sua subtacao foi de: %.1f", sub);
        break;    
    case 3:
        mult = num1 * num2;
        printf("Sua multiplicacao foi de: %.1f", mult);
        break;    
    case 4:
        div = num1 / num2;
        printf("Sua divisao foi de: %.0f", div);
        break;
    default:
        printf("Entre com um numero valido!");
        break;
    }
    return 0;
}
