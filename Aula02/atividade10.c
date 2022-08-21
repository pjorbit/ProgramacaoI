#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float celsus, fahren;
	
	printf("*TRANSFORMANDO FAHRENHEIT EM CELSUS*\n\n");
	printf("Qual a sua temperatura atual? (em fahrenheit)");
	scanf("%f", &fahren);
	celsus = ((fahren - 32) / 1.8);
	printf("Sua temperatura em Celsus é de: %0.1f", celsus);
	return 0;
}
