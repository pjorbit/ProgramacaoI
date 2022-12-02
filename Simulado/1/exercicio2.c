#include <stdio.h>
#include <locale.h>
#include <math.h>

/*Leia um numero fornecido pelo usuário. Se esse numero for positivo,
calcule a raiz quadrada do numero e calcule a potência. Se o numero for
negativo, mostre uma mensagem dizendo que o numero é invalido.  ́
Utilize a biblioteca #include <math.h>para utilizar a função da raiz
quadrada e a potência , if e else.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    float numUser, potencia, raiz;

    printf("Por favor, entre com um numero: \n");
    scanf("%f", &numUser);
    if(numUser>0) {
        potencia = pow(numUser, numUser);
        raiz = sqrt(numUser);
        printf("A potencia do seu numero e de: %.2f \n", potencia);
        printf("A raiz do seu numero e de: %.2f", raiz);
    } else if(numUser<0) {
        printf("Seu numero e invalado!");
    }
}