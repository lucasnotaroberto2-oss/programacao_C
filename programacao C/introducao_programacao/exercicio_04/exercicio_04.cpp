#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dias,horas,minutos,segundos;
	
	printf("Dias: ");
	scanf("%d", &dias);
	printf("\nHoras: ");
	scanf("%d", &horas);
	printf("\nMinutos: ");
	scanf("%d", &minutos);
	printf("\nSegundos: ");
	scanf("%d", &segundos);
	
	int total = dias * 86400 + horas * 3600 + minutos * 60 + segundos;
	
	printf("\nTempo em segundos: %d",total);
	
	return 0;
}
