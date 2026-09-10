#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b;
	
	printf("Digite 2 numeros:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	
	float soma = a + b;
	
	printf("Resultado eh: %.2f",soma);

	
	return 0;
}
