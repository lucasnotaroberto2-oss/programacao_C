#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int vetor[10],i;
	int *ptr_vetor;
	
	ptr_vetor = malloc(sizeof(vetor));
	*ptr_vetor = vetor;
	
	printf("valores:\n");
	for(i = 0 ; i < 10 ; i++){
		vetor[i] = i;
		printf("%d\n",vetor[i]);
	}
	
	printf("\nenderecos:\n");
	for(i = 0 ; i < 10 ; i++){
		printf("%p\n",*ptr_vetor);
		ptr_vetor++;
	}
	
	free(ptr_vetor);

	system("pause");	
	return 0;
}
