/*Sistema de Monitoramento de tartarugas.
Imagine que você tem um laboratório onde você monitora duas
tartarugas, e contrata um estagiário para informar ao sistema se as
tartarugas estão sorrindo de 5 em 5 minutos. Baseado nisto o programa
vai imprimir a informação se as tartarugas estão em sincronia, então as
regras são:
Se as duas tartarugas estiverem sorrindo -> em sincronia
Conte quantas tartarugas
Se as duas tartarugas não estiverem sorrindo -> em sincronia
Conte quantas tartarugas
Se apenas uma tartaruga estiver sorrindo -> fora sincronia
Conte quantas tartarugas estão fora de sintonia*/


#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    int opcao1;

    printf("Por favor escolha uma das opções: \n");
    printf("1 - Todas estão sorrindo. \n");
    printf("2 - Nenhuma está sorrindo. \n");
    printf("3 - Apenas uma está sorrindo. \n");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
        printf("As duas tartarugas estão em sincronia!");
        break;
    case 2:
        printf("As tartarugas não estão em sincronia!");
        break;
    case 3:
        printf("Qual das tartarugas não está sorrindo? \n");
        printf("1 -- Donatelo \n");
        printf("2 -- Leonardo \n");
        scanf("%d", &opcao1);
        if (opcao1 == 1){
            printf("A tartaruga Donatelo está fora de sincronia!");
        } else if(opcao1 == 2) {
            printf("A tartaruga Leonardo está fora de sincronia!");
        } else {
            printf("Esse não é um número válido");
        }
        break;
        
    default:
        printf("Esse não é um número válido!");
        break;
    }

    return 0;
}