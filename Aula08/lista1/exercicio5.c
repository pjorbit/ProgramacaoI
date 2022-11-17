#include <stdio.h>
#include <locale.h>

/*
Um posto de combustíveis deseja determinar qual de seus produtos tem a
preferência de seus clientes. Escreva um algoritmo para ler o tipo de combustível
abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o
usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo
código (até que seja válido). O programa será encerrado quando o código informado
for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem como
as quantidades de cada combustível.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int escolhaUser=0, qtnAlcool=0, qtdGasolina=0, qtnDiesel=0;

    printf("Por favor, escolha o tipo de combustivel a ser abastecido. \n");
    printf("1 -- Alcool \n2 -- Gasolina \n3 -- Diesel \n4 -- Nenhum \n");
    scanf("%d", &escolhaUser);
    while (escolhaUser>0&&escolhaUser<4) {
        if(escolhaUser==1) {
            qtnAlcool = qtnAlcool + 1;
        } else if(escolhaUser==2) {
            qtdGasolina = qtdGasolina + 1;
        } else if(escolhaUser==3) {
            qtnDiesel = qtnDiesel + 1;
        }
        printf("Por favor, escolha o tipo de combustivel a ser abastecido. \n");
        printf("1 -- Alcool \n2 -- Gasolina \n3 -- Diesel \n4 -- Nenhum \n");
        scanf("%d", &escolhaUser);
    }
    printf("Muito obrigado! \n");
    printf("Quantidade de vezes que o Alcool foi abastecido: %d \n", qtnAlcool);
    printf("Quantidade de vezes que a Gasolina foi abastecido: %d \n", qtdGasolina);
    printf("Quantidade de vezes que o Diesel foi abastecido: %d \n", qtnDiesel);

    return 0;
}