#include <stdio.h>

int main(){
	int numero,soma = 0;
	float media = 0;
	int quant = 0;
	
	do{
		printf("Digite um numero:\n");
		scanf("%d",&numero);
		soma = soma + numero;
		quant ++;
	}while(numero != 0);
	
	
	media = soma/(quant - 1);
	printf("Você digitou %d numeros\n",quant-1);
	printf("O somatorio dos número é %d\n",soma);
	printf("média = %.f",media);
	
	return 0;
}
