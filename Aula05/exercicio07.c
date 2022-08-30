#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int laranjas, bergamotas;

    printf("Quantas laranjas foram compradas? \n");
    scanf("%d", &laranjas);
    printf("Quantas bergamotas foram compradas? \n");
    scanf("%d", &bergamotas);
    if(laranjas < 12 && bergamotas < 12) {
        float res;
        res = ((laranjas * 0.80)+ (bergamotas * 0.60));
        printf("Sua compra foi de: %0.2f", res);
    } else if(laranjas >= 12 && bergamotas >= 12) {
        float res;
        res = ((laranjas * 0.55)+ (bergamotas * 0.45));
        printf("Sua compra foi de: %0.2f", res);
    } else if(laranjas < 12 && bergamotas > 12) {
        float res;
        res = ((laranjas * 0.80)+ (bergamotas * 0.45));
        printf("Sua compra foi de: %0.2f", res);
    } else if(laranjas > 12 && bergamotas < 12) {
        float res;
        res = ((laranjas * 0.55)+ (bergamotas * 0.60));
        printf("Sua compra foi de: %0.2f", res);
    } else {
        printf("erro");
    }
    return 0;
}

/*As laranjas custam R$ 0,80 cada se forem
compradas menos do que uma dúzia, e R$0,55
se forem compradas pelo menos doze, a
bergamota custam R$ 0,60 cada se forem
compradas menos do que uma dúzia, e R$0,45
se forem compradas pelo menos doze. Escreva
um programa que leia o número de laranjas e
bergamotas compradas, calcule e escreva o
valor total da compra.*/