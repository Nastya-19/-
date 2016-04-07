#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas [100];
	int i;
	double a, b, n;
	printf("Vvedite a:");
	scanf("%lf", &a);
	printf("Vvedite b:");
	scanf("%lf", &b);
	
	for (i = 0, n = a; n < b; i++, n = n + 0.1 ){
		mas[i] = n;
		printf ("\t mas [%d] = %.1lf\n", i, mas[i]);
	}
	return 0;
}
