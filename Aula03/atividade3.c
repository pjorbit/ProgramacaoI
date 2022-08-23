#include <stdio.h>
#include <locale.h>

//declara??o das fun??es
float areaTriangulo(float b, float h);
float perimetroTriangulo(float l1, float l2, float l3);
float areaRetangulo(float b, float h);
float perimetroRetangulo(float b, float h);
float areaQuadrado(float l);
float perimetroQuadrado(float l);
float areaTrapezio(float B, float b, float h);
float perimetroTrapezio(float B, float b, float h);
float areaLosango(float D, float d);
float perimetroLosango(float l);
float areaCirculo(float r);

//declara??o das vari?veis globais
int opcao2;
int opcao;

int main(void) {
	setlocale(LC_ALL, "portuguese");

	printf("Por favor escolha uma das op??es: \n");
	printf("1 - Tri?ngulo\n");
	printf("2 - Ret?ngulo\n");
	printf("3 - Quadrado\n");
	printf("4 - Trap?zio\n");
	printf("5 - Losango\n");
	printf("6 - Circulo\n");
	printf("Op??o: \n");
	scanf("%d", &opcao);
	
	switch(opcao) {
		case 1 :
			printf("Voc? escolheu a op??o 1 - Tri?ngulo\n");
			printf("Gostaria de calcular a ?rea ou o per?metro? \n");
			printf("1 - ?rea\n");
			printf("2 - Per?metro\n");
			scanf("%d", &opcao2);
			if(opcao2 == 1) {
				float base, altura, area;
				printf("Digite a base e em seguida a altura: \n");
				scanf("%f", &base);
				scanf("%f", &altura);
				area = areaTriangulo(base, altura);
				printf("A ?rea do seu tri?ngulo ? de: %0.1f", area);
			} else if(opcao2 == 2){
				float perimetro, lado1, lado2, lado3;
				printf("Digite os lados do seu tri?ngulo: \n");
				scanf("%f", &lado1);
				scanf("%f", &lado2);
				scanf("%f", &lado3);
				perimetro = perimetroTriangulo(lado1, lado2, lado3);
				printf("A ?rea do seu tri?ngulo ? de: %0.1f", perimetro);
		}
		break;
		case 2 : 
			printf("Voc? escolheu a op??o 2 - Ret?ngulo\n");
			printf("Gostaria de calcular a ?rea ou o per?metro? \n");
			printf("1 - ?rea\n");
			printf("2 - Per?metro\n");
			scanf("%d", &opcao2);
			if(opcao2 == 1) {
				float base, altura, area;
				printf("Digite a base e em seguida a altura: \n");
				scanf("%f", &base);
				scanf("%f", &altura);
				area = areaRetangulo(base, altura);
				printf("A ?rea do seu ret?ngulo ? de: %0.1f", area);
			} else if(opcao2 == 2){
				float perimetro, base, altura;
				printf("Digite a base e altura do seu ret?ngulo: \n");
				scanf("%f", &base);
				scanf("%f", &altura);
				perimetro = perimetroRetangulo(base, altura);
				printf("O perimetro do seu ret?ngulo ? de: %0.1f", perimetro);
			}
		break;
		case 3 :
			printf("Voc? escolheu a op 3 - Quadrado\n");
			printf("Gostaria de calcular a ?rea ou o per?metro? \n");
			printf("1 - ?rea\n");
			printf("2 - Per?metro\n");
			scanf("%d", &opcao2);
			if(opcao2 == 1) {
				float area, lado;
				printf("Digite o valor de um dos lados: \n");
				scanf("%f", &lado);
				area = areaQuadrado(lado);
				printf("A ?rea do seu quadrado ? de: %0.1f", area);
			} else if(opcao2 == 2){
				float perimetro, lado;
				printf("Digite o valor de um dos lados: \n");
				scanf("%f", &lado);
				perimetro = perimetroQuadrado(lado);
				printf("O perimetro do seu quadrado ? de: %0.1f", perimetro);
			}
		break;
		case 4 :
			printf("Voc? escolheu a op??o 4 - Trap?zio\n");
			printf("Gostaria de calcular a ?rea ou o per?etro? \n");
			printf("1 - ?rea\n");
			printf("2 - Per?metro\n");
			scanf("%d", &opcao2);
			if(opcao2 == 1) {
				float area, baseMaior, baseMenor, altura;
				printf("Digite o valor da base maior e em seguida o valor da base menor: \n");
				scanf("%f", &baseMaior);
				scanf("%f", &baseMenor);
				printf("Digite a altura: \n");
				scanf("%f", &altura);
				area = areaTrapezio(baseMaior, baseMenor, altura);
				printf("A ?rea do seu trap?zio ? de: %0.1f", area);
			} else if(opcao2 == 2){
				float perimetro, baseMaior, baseMenor, altura;
				printf("Digite o valor da base maior e em seguida o valor da base menor: \n");
				scanf("%f", &baseMaior);
				scanf("%f", &baseMenor);
				printf("Digite a altura: \n");
				scanf("%f", &altura);
				perimetro = perimetroTrapezio(baseMaior, baseMenor, altura);
				printf("O perimetro do seu trap?zio ? de: %0.1f", perimetro);
			}
		break;
		case 5 :
			printf("Voc? escolheu a op??o 5 - Losango\n");
			printf("Gostaria de calcular a ?rea ou o per?metro? \n");
			printf("1 - ?rea\n");
			printf("2 - Per?metro\n");
			scanf("%d", &opcao2);
			if(opcao2 == 1) {
				float area, diagonalMaior, diagonalMenor;
				printf("Digite o valor da diagonal maior e em seguida a diagonal menor: \n");
				scanf("%f", &diagonalMaior);
				scanf("%f", &diagonalMenor);
				area = areaLosango(diagonalMaior, diagonalMenor);
				printf("A ?rea do seu losango ? de: %0.1f", area);
			} else if(opcao2 == 2){
				float perimetro, lado;
				printf("Digite o valor de um dos lados: \n");
				scanf("%f", &lado);
				perimetro = perimetroLosango(lado);
				printf("O perimetro do seu losango ? de: %0.1f", perimetro);
			}
		break;
		case 6 :
			printf("Voc? escolheu a op??o 6 - C?rculo\n");
			printf("Gostaria de calcular a ?rea do c?rculo? \n");
			printf("1 - ?rea\n");
			scanf("%d", &opcao2);
			if(opcao2 == 1) {
				float area, raio;
				printf("Digite o valor do raio do seu c?rculo: \n");
				scanf("%f", &raio);
				area = areaCirculo(raio);
				printf("A ?rea do seu c?rculo ? de %0.1f", area);
			}
		break;
		default : printf("Entre com uma das op??es");
	}
	return 0;
}

//fun??es tri?ngulo
float areaTriangulo(float b, float h) {
	float a;
	a = ((b * h) / 2);
	return a;
}
float perimetroTriangulo(float l1, float l2, float l3) {
	float p;
	p = (l1 + l2 + l3);
	return p;
}

//fun??es ret?ngulo
float areaRetangulo(float b, float h) {
	float a;
	a = (b * h);
	return a;
}
float perimetroRetangulo(float b, float h) {
	float p;
	p = (2 * (b + h));
	return p;
}

//fun??es quadrado
float areaQuadrado(float l) {
	float a;
	a = (l * l);
	return a;
}
float perimetroQuadrado(float l) {
	float p;
	p = (l * 4);
	return p;
}

//fun??es trap?zio
float areaTrapezio(float B, float b, float h) {
	float a;
	a = (((B + b) * h) / 2);
	return a;
}
float perimetroTrapezio(float B, float b, float h) {
	float p;
	p = (B + b + h);
	return p;
}

//fun??es losango
float areaLosango(float D, float d) {
	float a;
	a = ((D * d) / 2);
	return a;
}
float perimetroLosango(float l) {
	float p;
	p = (4 * l);
	return p;
}

//fun??o c?rculo
float areaCirculo(float r) {
	float a;
	float pi = 3.14;
	a = (pi * (r * 2));
	return a;
}
