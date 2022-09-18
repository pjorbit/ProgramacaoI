#include <stdio.h>
#include <locale.h>

/*Escreva um algoritmo para ler o número de lados de um polígono regular, e
a medida do lado. Calcular e imprimir o seguinte: a. Se o número de lados for
igual a 3 escrever TRIÂNGULO e o valor do seu perímetri. b. Se o número de
lados for igual a 4 escrever QUADRADO e o valor da sua área. c. Se o número
de lados for igual a 5 escrever PENTÁGONO.*/

float perimetroTriangulo(float l1, float l2, float l3);
float areaQuadrado(float l);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float lado1, lado2, lado3, perimetro, l1, area;

    printf("3 - Triangulo \n");
    printf("4 - Quadrado \n");
    printf("5 - Pentagono \n");
    printf("Quantos lados tem a sua figura? \n");
    scanf("%d", &opcao);
    switch (opcao) {
    case 3:
        printf("Por favor, entre com os 3 lados do seu triangulo: \n");
        scanf("%f", &lado1);
        scanf("%f", &lado2);
        scanf("%f", &lado3);
        perimetro = perimetroTriangulo(lado1, lado2, lado3);
        printf("O perimetro do seu triangulo e de: %.2f", perimetro);
        break;
    case 4:
        printf("Por favor, entre com um dos lados do seu quadrado: \n");
        scanf("%f", &l1);
        area = areaQuadrado(l1);
        printf("A area do seu quadrado e de: %.2f", area);
        break;
    case 5:
        printf("Parabens, voce escolheu o pentagono :)");
        break;
    default:
        printf("Esse nao e um numero valido!!");
        break;
    }

    return 0;
}


float perimetroTriangulo(float l1, float l2, float l3) {
	float p;
	p = (l1 + l2 + l3);
	return p;
}

float areaQuadrado(float l) {
	float a;
	a = (l * l);
	return a;
}