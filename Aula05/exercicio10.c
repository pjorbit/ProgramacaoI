#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int alternativa;
    float compra, totalCompra, valorDesc, porcentagem;

    printf("Por favor, digite o valor total da sua compra: \n");
    scanf("%f", &compra);
    printf("Por favor, digite o seu código de cliente\n");
    printf("1 - Comum\n");
    printf("2 - Funcionario\n");
    printf("3 - Vip\n");
    scanf("%d", &alternativa);
    switch(alternativa){
    case 1:
        valorDesc = ((compra / 100) * 2);
        totalCompra = compra - valorDesc;
        printf("Sua compra com desconto foi de: R$%.1f", totalCompra);
        break;
    case 2:
        valorDesc = ((compra / 100) * 10);
        totalCompra = compra - valorDesc;
        printf("Sua soma foi de: R$%.1f", totalCompra);
        break;    
    case 3:
        valorDesc = ((compra / 100) * 5);
        totalCompra = compra - valorDesc;
        printf("Sua soma foi de: %.1f", totalCompra);
        break;    
    default:
        printf("Entre com um numero valido!");
        break;
    }
    return 0;
}