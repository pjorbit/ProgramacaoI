#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    float pares[50], impares[50];

    printf("Por favor, entre com o primeiro numero inteiro: \n");
    scanf("%d", &num1);
    printf("Agora entre com o segundo numero: \n");
    scanf("%d", &num2);
    for (num1; num1 < num2; num1++) {
        if (num1 % 2 == 0) {
            printf("Par: %f \n", pares);
        } else if(num1 % 2 == 1) {
            printf("Impar: %d \n", num1);
        } 
    }
    
    return 0;
}