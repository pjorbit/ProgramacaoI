#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, numeroLoop;

    printf("Por favor, entre com o primeiro numero inteiro: \n");
    scanf("%d", &num1);
    printf("Agora entre com o segundo numero: \n");
    scanf("%d", &num2);
    printf("Numeros entre %d e %d \n", num1, num2);
    for(num1; num1 <= num2; num1++) {
        printf("%d \n", num1);
    }

    return 0;
}