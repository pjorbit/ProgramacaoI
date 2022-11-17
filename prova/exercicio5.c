#include <stdio.h>
#include <locale.h>

/*Codifique um programa em C que solicite ao usuário o valor do seu saldo
bancário, e armazene o valor digitado em uma variável. 
Após isso, verifique se o saldo bancário é positivo. 
Caso não seja, apresente a mensagem “Saldo insuficiente”. 
Caso seja positivo, solicite ao usuário um valor para saque. 
Caso o valor do saque seja maior que o valor do saldo, apresente a mensagem
“Saldo Insuficiente”. 
Caso o valor do saque seja menor que o valor do saldo, efetue o desconto e apresente o novo saldo atualizado. 
Pergunte ao usuário se deseja continuar s-sim, n-não. Utilize while.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    float saldo, saque, saldoFinal;
    char opcaoUser = 'S';

    while (opcaoUser!='N') {
        printf("Entre com seu saldo: R$");
        scanf("%f", &saldo);
        if (saldo>0) {
            printf("Por favor, digite um valor para saque: R$");
            scanf("%f", &saque);
            if(saque>saldo) {
                printf("Saldo insuficiente! \n");
            } else if(saque<saldo) {
                saldoFinal = (saldo - saque);
                printf("Seu saldo atualizado: RS%.2f \n", saldoFinal);
            }
        } else if(saldo<0) {
            printf("Saldo insuficiente! \n");
        }
        printf("Deseja continuar? S-Sim ou N-Nao \n");
        scanf(" %c", &opcaoUser);
    }

    return 0;
}







/*    char opcaoUser;
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
    } while (opcaoUser!='D');*/