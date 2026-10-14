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

	double num1 = atof(string1);
	double num2 = atof(string2);
	double num3 = atof(string3);
	double num4 = atof(string4);

	float soma = num1 + num2 + num3 + num4;
	printf("%f\n",soma);

	system("pause");
	return 0;
}
