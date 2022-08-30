#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float peso, altura, imc;
    printf("Por favor, entre com o seu peso e em seguida sua altura: \n");
    scanf("%f", &peso);
    scanf("%f", &altura);
    imc = (peso /(altura * 2));
    if(imc < 18) {
        printf("Voce esta muito abaixo do seu peso ideal. Procure um medico imediatamente!");
    } else if(imc <= 25) {
        printf("Voce esta com um peso ideal.");
    } else if(imc <= 30) {
        printf("Voce esta com um sobre peso. E recomendado cuidar mais da alimentacao.");
    } else if(imc <= 40) {
        printf("Seu peso esta muito alto. Voce esta obeso.");
    } else {
        printf("Procure um medico imediatamente, voce esta com obesidade morbida!");
    }
    return 0;
}