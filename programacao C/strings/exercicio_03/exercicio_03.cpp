#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char texto[100];
	
	fgets(texto,100,stdin);
	
	for (int i = 0; texto[i] != '\0'; i++) {
        texto[i] = toupper((unsigned char)texto[i]);
    }

    printf("Texto maiusculo:\n%s\n", texto);

    for (int i = 0; texto[i] != '\0'; i++) {
        texto[i] = tolower((unsigned char)texto[i]);
    }

    printf("Texto minusculo:\n%s\n", texto);
	
	system("pause");
	return 0;
}
