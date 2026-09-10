#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int salario;
	float reajuste,novo_salario;
	
	printf("Digite o salário: \n");
	scanf("%d", &salario);
	
	if(salario <=400){reajuste = 15.0/100;}
	else if(salario > 400 && salario <=800){reajuste = 12.0/100;}
	else if(salario > 800 && salario <= 1200){reajuste = 1.0/10;}
	else if(salario > 1200 && salario <= 2000){reajuste = 7.0/100;}
	else{reajuste = 4.0/100;}
	
	novo_salario = salario + salario * reajuste;
	
	printf("Novo salario = %.2f\n",novo_salario);
	printf("Valor do reajuste = %.2f\n",novo_salario - salario);
	printf("Indice do reajuste = %.f", reajuste * 100);
	
	return 0;
}
