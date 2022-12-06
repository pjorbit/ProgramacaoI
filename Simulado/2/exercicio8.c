#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

/*Fazer um programa em "C" que solicita o total gasto pelo cliente de uma
loja imprime as opções de pagamento, solicita a opção desejada e
imprime o valor total das prestações (se houverem).
1) Opção: a vista com 10% de desconto
2) Opção: em duas vezes (preço da etiqueta)
3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente
para compras acima de R$ 100,00).
OBS: fazer uma função que imprime as opções solicita a opção
desejada e retorna a opção escolhida.
No programa principal, testar a opção escolhida e ativar a função
correspondente (uma função para cada opção).*/

void opcaoPagamento();

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcaoUser;

    opcaoPagamento();
    printf("Qual opcao desejada? ");
    scanf("%d", opcaoUser);

    

    return 0;
}

void opcaoPagamento() {
    printf("1 - A vista com desconto");
    printf("2 - em duas vezes (preco da etiqueta)");
    printf("3 - de 4 ate 10 vezes com 3% de juros ao mes (somente para compras acima de R$100)");
}
