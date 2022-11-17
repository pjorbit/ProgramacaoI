#include <stdio.h>
#include <locale.h>

/*1-Escreva um programa que apresente quatro opções: (a) consulta saldo, (b) saque e (c)
depósito e (d) sair. 1. O saldo deve iniciar em R$ 0,00. A cada saque ou depósito o valor do
saldo deve ser atualizado.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    char opcaoUser;
    float deposito, saque, extrato;

    do {
        printf("A - Consulta saldo \nB - Saque \nC - Deposito \nD - Sair \n");
        printf("Opcao:");
        scanf(" %c", &opcaoUser);

        if (opcaoUser=='A') {
            printf("Saldo: R$%.2f \n", extrato);
        } else if (opcaoUser=='B') {
            printf("Extrato atual: R$%.2f \n", extrato);
            printf("Qual valor gostaria de sacar? ");
            scanf("%f", &saque);
            extrato = extrato - saque;
            printf("Extrato atual: R$%.2f \n", extrato);
        } else if (opcaoUser=='C') {
            printf("Digite o valor do deposito:", deposito);
            scanf("%f", &deposito);
            extrato = extrato + deposito;
            printf("Extrato atual: R$%.2f \n", extrato);
        }
    } while (opcaoUser!='D');

    return 0;
}