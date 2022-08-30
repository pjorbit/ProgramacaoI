#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Por favor, entre com a sua idade: \n");
    scanf("%d", &idade);
    if(idade < 16) {
        printf("Voce ainda nao pode votar.");
    } else if(idade < 18 || idade > 65) {
        printf("Seu voto é facultativo!");
    } else {
        printf("Seu voto é obrigatorio");
    }
    return 0;
}