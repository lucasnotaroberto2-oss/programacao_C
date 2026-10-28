#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *x;
	char *ptr_char;
	float *ptr_float;
	
	x = malloc(sizeof(int));
	ptr_char = malloc(sizeof(char));
	ptr_float = malloc(sizeof(float));
	
	*x = 12;
	*ptr_char = 'a';
	*ptr_float = 1.2;
	
	printf("inteiro: %d\n",*ptr_inteiro)
	
	printf("endereco de inteiro: %p\n",&ptr_inteiro);
	
	
	free(ptr_inteiro);
	return 0;
}
