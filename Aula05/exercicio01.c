#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Por favor, entre com um n�mero inteiro: \n");
    scanf("%d", &num);
    if(num % 2 == 0 && num > 0) {
        printf("Seu n�mero � par.");
    } else {
        printf("Seu n�mero � impar.");
    }
    return 0;
}