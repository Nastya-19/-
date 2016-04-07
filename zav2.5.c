#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double mas[300];
	int i;
	double c;
	
	for (i = 0, c = - 10; c < 10; i++,c = c + 0.1){
		mas[i] = c;
		printf("\t mas [%d] = %.1lf\n", i, c);
	}
	return 0;
}
