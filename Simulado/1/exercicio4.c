#include <stdio.h>
#include <locale.h>

/*Para fazer este programa deve utilizar o teste que verifica par
if(num%2==) o numero é par, senão if(num%2!=0) o número será impar,
além disso os valores informador pelo usuário, devem fazer parte do for(
valor inicial e final, que vai dar as vezes de repetir o bloco do for.*/

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1=0, num2=0;

    printf("Entre com um numero: ");
    scanf("%d", &num1);
    printf("Entre com um segundo numero: ");
    scanf("%d", &num2);

    for(num1; num1<=num2; num1++) {
        if (num1%2==0) {
            printf("Numero par: %d \n", num1);
        } else if(num1%2==1)
            printf("Numero impar %d \n", num1);
    }
    
    return 0;
}