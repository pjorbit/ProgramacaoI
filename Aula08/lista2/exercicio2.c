#include <stdio.h>
#include <locale.h>

/*Faça um programa que receba uma senha formada de quatro
números inteiros, verifique se a senha está correta e, caso não
esteja, solicite novamente a senha. Se a senha entrada for a
correta, deverá ser apresentada a mensagem “Senha Correta”,
caso contrário, “Senha Incorreta”.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int password=2025, verify;

    printf("Entre com sua senha: ");
    scanf("%d", &verify);
    while (verify!=password){
        if (verify!=password) {
            printf("Senha invalida! \n");
        }
        printf("Entre com sua senha: ");
        scanf("%d", &verify);
    }
    printf("Senha correta!");
    

    return 0;
}