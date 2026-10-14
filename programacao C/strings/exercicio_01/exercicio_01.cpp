#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char string1[10];
	char string2[10];
	char string3[10];
	char string4[10];
	
	fgets(string1,10,stdin);
	fgets(string2,10,stdin);
	fgets(string3,10,stdin);
	fgets(string4,10,stdin);
	
	int num1 = atoi(string1);
	int num2 = atoi(string2);
	int num3 = atoi(string3);
	int num4 = atoi(string4);
	
	int soma = num1 + num2 + num3 + num4;
	printf("%d",soma);

	system("pause");
	return 0;
}
