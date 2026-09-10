#include <stdio.h>

int main(void){
	int idade;
	float preco,soma = 0;
	
	do{
		printf("Digite a idade do visitante:\n");
		scanf("%d", &idade);
		if(idade <= 2){preco = 0.00;}
		else if(idade > 2 && idade <= 12){preco = 14.00;}
		else if(idade >= 65){preco = 18.00;}
		else{preco = 23.00;}
		
		soma = soma + preco;		
	}while(idade != 0);
	
	printf("O valor do grupo é %.2f",soma);
	
	return 0;
}
