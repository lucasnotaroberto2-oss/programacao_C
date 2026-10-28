#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *ptr_inteiro;
	char *ptr_char;
	float *ptr_float;

	ptr_inteiro = malloc(sizeof(int));
	ptr_char = malloc(sizeof(char));
	ptr_float = malloc(sizeof(float));

	*ptr_inteiro = 12;
	*ptr_char = 'a';
	*ptr_float = 1.2;

	printf("inteiro: %d\n",*ptr_inteiro);
	printf("char: %c\n",*ptr_char);
	printf("float: %.2f\n\n",*ptr_float);
	
	printf("endereco de inteiro: %p\n",&ptr_inteiro);
	printf("endereco de char: %p\n",&ptr_char);
	printf("endereco de float: %p\n\n",&ptr_float);

	free(ptr_inteiro);
	free(ptr_char);
	free(ptr_float);
	
	system("pause");
	return 0;
}
