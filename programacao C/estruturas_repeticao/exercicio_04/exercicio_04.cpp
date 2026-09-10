#include <stdio.h>

int main(void){
	int numero,prox,i;
	int a = 0;
	int b = 1;
	
	printf("Digite um número:\n");
	scanf("%d", &numero);
	
	for(i = 0;i < numero;i++){
		printf("%d ",a);
		
		prox = a + b;
		a = b;
		b = prox;
	}
	
	return 0;
}
