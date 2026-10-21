#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x, *x_ptr = NULL;
	float y, *y_ptr = NULL;
	char z, *z_ptr = NULL;
	
	x = 1;
	y = 2.0;
	z = 'a';
	
	x_ptr = &x;
	y_ptr = &y;
	z_ptr = &z;
	
	printf("Valores pre modificacoes: %d ; %f ; %c \n", x, y, z);
	
	++(*x_ptr);
	*y_ptr += 0.222;
	*z_ptr = 'b';
	
	printf("Valores pos modificacoes: %d ; %f ; %c \n", x, y, z);


	system("pause");
	return 0;
}
