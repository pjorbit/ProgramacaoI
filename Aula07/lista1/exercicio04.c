#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, num4;

    printf("Por favor, entre com o primeiro numero inteiro: \n");
    scanf("%d", &num1);
    printf("Agora entre com o segundo numero: \n");
    scanf("%d", &num2);
    num4 = num1;

    printf("Numeros pares entre %d e %d. \n", num1, num2);
    for (num1;num1<=num2;num1++) {
        if (num1 % 2 == 0) {
            printf("%d ", num1);
        }
    }
    printf("\nNumeros impares entre %d e %d. \n", num4, num2);
    for (num4;num4<=num2;num4++) {
        if(num4 % 2 == 1) {
            printf("%d ", num4);
        }
    }
    
    return 0;
}