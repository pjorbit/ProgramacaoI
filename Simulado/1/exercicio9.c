#include <stdio.h>
#include <locale.h>

/**/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idadeUser = 1;

    do {
        printf("Por favor, entre com sua idade: \n");
        scanf("%d", &idadeUser);
        if(idadeUser >= 5 && idadeUser <= 7) {
            printf("Sua categoria e Infantil A! \n");
        } else if(idadeUser >= 8 && idadeUser <= 10) {
            printf("Sua categoria e Infantil B! \n");
        } else if(idadeUser >= 11 && idadeUser <= 13) {
            printf("Sua categoria e Juvenil A! \n");
        } else if(idadeUser >= 14 && idadeUser <= 17) {
            printf("Sua categoria e Juvenil B! \n");
        } else if(idadeUser>18){
            printf("Sua categoria e Senior! \n");
        } else {
            printf("Voce nao tem idade para jogar! \n");
        }
    } while (idadeUser!=0);

    return 0;
}