#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a = 25;
	float b = 47.50;
	float c = 68.25;
	float total = a + b + c;
	
	printf("Produto 1\t=\t%.2f\n",a);
	printf("Produto 2\t=\t%.2f\n",b);
	printf("Produto 3\t=\t%.2f\n",c);
	printf("---------------------------\n");
	printf("Total\t\t=\t%.2f\n",total);


	
	return 0;
}
