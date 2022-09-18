#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigo, qnt;
    float valorProduto;

    printf("Codigo -- Produto ---------- Preco \n");
    printf("1 ------- Cachorro Quente -- R$21,20 \n");
    printf("2 ------- Bauru Simples ---- R$18,30 \n");
    printf("3 ------- Bauru com ovo ---- R$21,50 \n");
    printf("4 ------- Hamburguer ------- R$19,20 \n");
    printf("5 ------- Cheeseburger ----- R$22,30 \n");
    printf("6 ------- Refrigerante ----- R$5,00 \n");

    printf("Qual o codigo do produto que deseja? \n");
    scanf("%d", &codigo);
    printf("Quantos produtos deseja? \n");
    scanf("%d", &qnt);
    switch (codigo) {
    case 1:
        valorProduto = (21.20 * qnt);
        printf("O valor da sua compra foi de R$%.2f reais!.", valorProduto);
        break;
    case 2:
        valorProduto = (18.30 * qnt);
        printf("O valor da sua compra foi de R$%.2f reais!.", valorProduto);
        break;
    case 3:
        valorProduto = (21.50 * qnt);
        printf("O valor da sua compra foi de R$%.2f reais!.", valorProduto);
        break;
    case 4:
        valorProduto = (19.20 * qnt);
        printf("O valor da sua compra foi de R$%.2f reais!.", valorProduto);
        break;
    case 5:
        valorProduto = (22.30 * qnt);
        printf("O valor da sua compra foi de R$%.2f reais!.", valorProduto);
        break;
    case 6:
        valorProduto = (5 * qnt);
        printf("O valor da sua compra foi de R$%.2f reais!.", valorProduto);
        break;

    default:
        break;
    }

    return 0;
}