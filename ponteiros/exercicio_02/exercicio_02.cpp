#include <stdio.h>
#include <stdlib.h>

int main(void){
	float x, *x_ptr;
	float y, *y_ptr;
	
	scanf("%f",&x);
	scanf("%f",&y);
	
	x_ptr = &x;
	y_ptr = &y;
	
	float soma = (*y_ptr) + (*x_ptr);
	printf("\nSoma: %f\n", soma);

	system("pause");
	return 0;
}
