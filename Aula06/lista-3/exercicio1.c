#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Por favor, entre com sua idade: \n");
    scanf("%d", &idade);
    if(idade >= 5 && idade <= 10) {
        printf("Sua categoria e Infantil!");
    } else if(idade >= 10 && idade <= 15) {
        printf("Sua categoria e Juvenil!");
    } else if(idade >= 15 && idade <= 20) {
        printf("Sua categoria e Junior!");
    } else if(idade >= 20 && idade <= 25) {
        printf("Sua categoria e Profissional!");
    } else {
        printf("Voce nao tem idade para jogar!");
    }


    return 0;
}