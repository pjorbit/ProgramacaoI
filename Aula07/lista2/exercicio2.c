#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i;

    printf("Todos os numeros impares de 100 a 300. \n");
    for (i = 100; i <= 300; i+=3) {
        if (i % 2 == 1){
            printf("%d \n", i);
        }
    }

    return 0;
}