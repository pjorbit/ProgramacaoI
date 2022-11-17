#include <stdio.h>
#include <locale.h>

/*
Elabore um algoritmo que solicite que o usuário entre com 30 números quaisquer. Ao final
apresente separadamente: a. A soma dos 10 primeiros números digitados; b. A soma do 11°
número até o 20°; c. A soma do 21° número até o 30°.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i, numUser, primeiraSoma, segundaSoma, terceiraSoma;

    do {
        for (i=0;i<=30; i++) {
            printf("Entre com um numero: \n");
            scanf("%d", &numUser);
            if(i<11) {
                primeiraSoma = primeiraSoma + numUser;
            } else if(i<21) {
                segundaSoma = segundaSoma + numUser;
            } else if(i<31) {
                terceiraSoma = terceiraSoma + numUser;
            }
        }
        
    } while (i==30);
    printf("A soma dos 10 primeiros digitos foi: %d \n", primeiraSoma);
    printf("A soma do 11° ate o 20° primeiro digito foi: %d \n", segundaSoma);
    printf("A soma dos 20° ate o 30° primeiro digito foi: %d \n", terceiraSoma);

    return 0;
}