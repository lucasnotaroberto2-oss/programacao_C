#include <stdio.h>
#include <math.h>

int main(void){
	int numero,i,j;
	
	printf("Digite um número:\n");
	scanf("%d", &numero);
	
	for(i = 1;i <= numero;i++){
		for(j = 0; j < 2;j++){
			if(j == 0){
				printf("%d\t%.f\t%.f\n",i,pow(i,2),pow(i,3));
			}
			if(j == 1){
				printf("%d\t%.f\t%.f\n",i,pow(i,2) + 1,pow(i,3) + 1);
			}
		}
	}
	
	return 0;
}
