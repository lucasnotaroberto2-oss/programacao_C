#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("Digite x e y: \n");
	scanf("%d",&x);
	scanf("%d",&y);
	
	if(x == 0 && y == 0){
		printf("Origem");
	}
	else if(x != 0 && y == 0){
		printf("Sobre o eixo x");
	}
	else if(x == 0 && y != 0){
		printf("Sobre o eixo y");
	}
	else if(x > 0){
		if(y > 0){
			printf("Q1");
		}
		else{
			printf("Q4");
		}
	}
	else{
		if(y > 0){
			printf("Q2");
		}
		else{
			printf("Q3");
		}
	}
	

	
	return 0;
}
