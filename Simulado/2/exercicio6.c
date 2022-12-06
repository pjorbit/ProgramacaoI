#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

/*Uma empresa irá ajustar o salário de seus funcionários de acordo com
a categoria de trabalho dos funcionários: CAT A (10% de aumento), CAT
B (15% de aumento) e CAT C (20% de aumento). Faça um programa
que leia o plano de trabalho e o salário atual de um funcionário e calcula
e imprime o seu novo salário. Use o comando switch.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcaoUser=0;
    float salario=0, aumento=0, salarioAumentado=0;

    printf("Por favor, entre com seu salario: ");
    scanf("%f", &salario);
    printf("1 - CAT A\n");
    printf("2 - CAT B\n");
    printf("3 - CAT C\n");
    printf("Qual seu plano de trabalho? ");
    scanf("%d", &opcaoUser);

    switch (opcaoUser) {
    case 1:
        aumento = (salario/100)*10;
        salarioAumentado = salario + aumento;
        printf("Seu aumento de 10 porcento equivale a: R$%.2f\n", aumento);
        printf("Seu salario com o aumento e de: R$%.2f", salarioAumentado);
        break;
    case 2:
        aumento = (salario/100)*15;
        salarioAumentado = salario + aumento;
        printf("Seu aumento de 15 porcento equivale a: R$%.2f\n", aumento);
        printf("Seu salario com o aumento e de: R$%.2f", salarioAumentado);
        break;
    case 3:
        aumento = (salario/100)*20;
        salarioAumentado = salario + aumento;
        printf("Seu aumento de 20 porcento equivale a: R$%.2f\n", aumento);
        printf("Seu salario com o aumento e de: R$%.2f", salarioAumentado);
        break;
    default:
        printf("Esse nao e uma opcao valida!");
        break;
    }

    return 0;
}