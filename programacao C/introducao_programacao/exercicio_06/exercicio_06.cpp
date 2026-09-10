#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int km,dias;
	
	printf("Digite os kms percorridos: \n");
	scanf("%d", &km);
	printf("Digite os dias: \n");
	scanf("%d", &dias);
	
	float total = km * 0.15 + dias * 60;
	printf("\nPreco total aluguel: %.2f",total);
	
	
	return 0;
}
