#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("O primeiro programa a gente nunca esquece!.");
	return 0;
}
