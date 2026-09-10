#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float altura;
	printf("Digite a sua altura (m): \n");
	scanf("%f", &altura);
	float peso_ideal = (72.7 * altura) - 58;
	printf("\nPeso ideal: %.2f kg",peso_ideal);
	
	return 0;
}
