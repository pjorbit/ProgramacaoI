#include <stdio.h>
#include <locale.h>

/*Desenvolva um programa para comparar a idade de Pedro e a de Joana e
informar quem é o mais velho. Dados de entrada: idade de Pedro e de Joana
(tipo das variáveis: inteiro, e valor em anos). Observação: essas pessoas
possuem idades diferentes.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idadePedro, idadeJoana;

    printf("Pedro, entre com a sua idade: \n");
    scanf("%d", &idadePedro);
    printf("Joana, entre com a sua idade: \n");
    scanf("%d", &idadeJoana);
    if(idadePedro > idadeJoana) {
        printf("Pedro e mais velho que Joana.");
    } else if(idadeJoana > idadePedro) {
        printf("Joana e mais velha que Pedro.");
    } else {
        printf("Ambos possuem a mesma idade!");
    }

    return 0;
}