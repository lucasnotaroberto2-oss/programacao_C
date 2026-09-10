#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char tipo,porcentagem = '%';
	int quant,desconto;
	float total,novo_preco,preco;
	
	printf("Digite o tipo de combustivel (G para Gasolina ou A para Alcool):\n");
	scanf("%c", &tipo);
	
	printf("Digite a quantidade de litros:\n");
	scanf("%d", &quant);
	
	if(tipo == 'A'){
		if(quant <= 20){
			desconto = 3;
		}
		else{
			desconto = 5;
		}
		preco = 3.19;
	}
	else if(tipo == 'G'){
		if(quant <= 20){
			desconto = 4;
		}
		else{
			desconto = 6;
		}
		preco = 4.39;
	}
	
	total = quant * preco;
	novo_preco = total - total * desconto/100;
	printf("Valor com desconto de %d%c: %.2f",desconto,porcentagem,novo_preco);
	
	
	
	return 0;
}
