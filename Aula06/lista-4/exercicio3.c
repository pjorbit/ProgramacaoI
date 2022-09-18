#include <stdio.h>
#include <locale.h>

/*Um comerciante comprou um produto e quer vendê-lo com um lucro de 35%
se o valor da compra for menor que R$ 15,00; caso contrário, o lucro será de
20%. Construa um algoritmo que leia o valor do produto e imprima o valor de
venda para o produto.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    float valorProduto, lucroMenor, lucroMaior, valorFinal;

    printf("Qual o valor do produto? \n");
    scanf("%f", &valorProduto);
    if(valorProduto < 15) {
        lucroMaior = ((valorProduto * 35) / 100);
        valorFinal = valorProduto + lucroMaior;
        printf("O valor de venda desse produto deverá ser de: R$%.2f", valorFinal);
    } else if(valorProduto >= 15) {
        lucroMenor = ((valorProduto * 20) / 100);
        valorFinal = valorProduto + lucroMenor;
        printf("O valor de venda desse produto deverá ser de: R$%.2f", valorFinal);
    }

    return 0;
}