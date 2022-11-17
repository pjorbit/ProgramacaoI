#include <stdio.h>
#include <locale.h>

/*
Codifique um programa em C que solicite ao usuário o preço para um dado produto e a
quantidade do mesmo que será comprada. Considerando a tabela de desconto abaixo, calcule
o preço final que deve ser pago pelo cliente. Continue perguntado até que o usuário, escolha
n-Não continuar repetindor.
Poderá utilizar neste programa while para efetuar a repetição do
bloco, iniciazinando a variável resp=’s’, e dentro do bloco para testar as opções da tabela com
if e else.
Para fazer o calculo :desconto=(valorproduto * (percentual/100));
Valortotal=valorpruduto-desconto;
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    float precoProduto, qntdProduto, desconto, precoTotal, precoFinal;
    char opcaoUser = 'S';

    //desc=preco*5/100;
    //valortotal=preco-desc

    while(opcaoUser!='N') {
        printf("Qual o preco do produto? \n");
        scanf("%f", &precoProduto);
        printf("Quantos produtos voce deseja comprar? \n");
        scanf("%f", &qntdProduto);
        if(qntdProduto<5) {
            desconto=((precoProduto*5)/100);
            precoFinal=precoProduto-desconto;
        } else if(qntdProduto<10) {
            desconto=((precoProduto*10)/100);
            precoFinal=precoProduto-desconto;
        } else if(qntdProduto<20) {
            desconto=((precoProduto*15)/100);
            precoFinal=precoProduto-desconto;
        } else {
            desconto=((precoProduto*20)/100);
            precoFinal=precoProduto-desconto;
        }
        printf("O valor total da sua compra foi de: R$%.2f \n", precoFinal);
        printf("Deseja continuar comprando? [S] - Sim ou [N] Nao \n");
        scanf(" %c", &opcaoUser);
    }

    return 0;
}