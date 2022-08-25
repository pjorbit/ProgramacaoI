#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, nota4, media;
    int fqc;

    printf("Por favor, entre com suas quatro notas: \n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    scanf("%f", &nota4);
    printf("Por favor, entre com a sua frequencia: ");
    scanf("%d", &fqc);
    media = ((nota1 + nota2 + nota3 + nota4) / 4);
    
    if (media < 5 && fqc < 60) {
        printf("Infelizmente voce foi reprovado, sua nota(%0.1f) não atingiu a média e sua frequencia foi menor que o minimo.", media);
    } else if (media < 5 && fqc > 60) {
        printf("Infelizmente voce foi reprovado, sua nota(%0.1f) não atingiu a média.");
    } else if (media > 5 && fqc < 60) {
        printf("Infelizmente voce foi reprovado, sua frequencia foi menor que o minimo.");
    } else if (media <= 7 && fqc < 60) {
               printf("Infelizmente voce foi reprovado, sua frequencia foi menor que o minimo.");
    } else if (media <= 7 && fqc > 60) {
        printf("Sua nota foi de: %0.1f. Voce está de recuperacao");
    } else if (media > 7 && fqc > 60) {
        printf("Voce foi aprovado! Parabens!");
    } else {
        printf("erro");
    }

    return 0;
}