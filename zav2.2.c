#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas [100];
	int a, b, i, n;
	printf("Vvedite a:");
	scanf("%d", &a);
	printf("Vvedite b:");
	scanf("%d", &b);
	
	for (i = 0, n = a; n < b; i++, n++){
		mas [i] = n;
		printf("\t mas[%d] = %d\n", i,n);
	}
	return 0;
}
