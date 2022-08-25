#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Por favor, entre com um número inteiro: \n");
    scanf("%d", &num);
    if(num % 2 == 0 && num > 0) {
        printf("Seu número é par.");
    } else {
        printf("Seu número é impar.");
    }
    return 0;
}