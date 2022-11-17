#include <stdio.h>
#include <locale.h>

/*Faça um programa que receba dois números X e Y, sendo X < Y. Calcule e mostre: 
• a soma dos números pares desse intervalo de números, incluindo os números digitados;
• a multiplicação dos números ímpares desse intervalo, incluindo os digitados;*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, somaPares=0, multInp=1;
    char opcao='S';

    while (opcao!='N') {
        printf("Entre com um numero: \n");
        scanf("%d", &num1);
        printf("Agora entre com um numero maior: \n");
        scanf("%d", &num2);
        for (int i=num1; i<num2; i++) {
            if(i%2==0) {
                somaPares = somaPares + i;
            } else if(i%2==1) {
                multInp = multInp * i;
            }
        }
        printf("Soma dos numeros pares: %d \n", somaPares);
        printf("Multiplicacao dos numeros impares: %d \n", multInp);
        printf("Deseja continuar? S=Sim, N=Nao \n");
        scanf(" %c", &opcao);
    }

    return 0;
}