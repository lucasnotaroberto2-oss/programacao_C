#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,temp;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("a=%d b=%d",a,b);

	
	return 0;
}
