#include <stdio.h>
#include <locale.h>

/*
Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para
cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida!
Tente novamente:". Quando a senha for informada corretamente deve ser impressa a
mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha
correta é o valor 2002.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int senha=2002, senhaUser=0;

    printf("Por favor, entre com a sua senha:");
    scanf("%d", &senhaUser);
    while (senhaUser!=senha) {
        printf("Senha invalilda! \n");
        printf("Por favor, entre com a sua senha corretamente:");
        scanf("%d", &senhaUser);
    }
    printf("Acesso permitido!");

    return 0;
}