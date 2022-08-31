#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade, alternativa;
    float peso, altura;
    char masc[] = "masculino";
    char fem[] = "feminino";
    char nome[30];

    printf("Qual o nome dessa pessoa? \n");
    scanf("%s", nome);
    printf("Por favor, entre com a idade dessa pessoa: \n");
    scanf("%d", &idade);
    printf("Agora o peso dessa pessoa: \n");
    scanf("%f", &peso);
    printf("Agora, a altura: \n");
    scanf("%f", &altura);
    printf("O sexo dessa pessoa é masculino[1] ou feminino[2]? \n");
    scanf("%d", &alternativa);
    if(alternativa == 1) {
        printf("%s, do sexo %s, tem uma idade de %d anos, uma altura de %.2f e um peso de %.1fKg", nome, masc, idade, altura, peso);
    } else if(alternativa == 2) {
        printf("%s do sexo %s, tem uma idade de %d anos, uma altura de %.2f e um peso de %.1fKg", nome, fem, idade, altura, peso);
    }
    return 0;
}