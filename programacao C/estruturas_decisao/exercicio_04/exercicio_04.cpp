#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int contador = 0;
	char opcao;
	printf("Responda as perguntas com sim (s) ou nao (n)\n");
	printf("Telefonou para a vitima?\n");
	scanf(" %c",&opcao);
	if(opcao == 's'){++contador;}
	printf("Esteve no local do crime?\n");
	scanf(" %c",&opcao);
	if(opcao == 's'){++contador;}
	printf("Mora perto da vitima?\n");
	scanf(" %c",&opcao);
	if(opcao == 's'){++contador;}
	printf("Devia para a vitima?\n");
	scanf(" %c",&opcao);
	if(opcao == 's'){++contador;}
	printf("Ja trabalhou com a vitima?\n");
	scanf(" %c",&opcao);
	if(opcao == 's'){++contador;}
	
	if(contador == 2){printf("SUSPEITO!");}
	else if(contador == 3 || contador == 4){printf("CUMPLICE!");}
	else if(contador == 5){printf("ASSASSINO!");}
	else{printf("INOCENTE!");}
	
	return 0;
}
