#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas [100];
	int h, i;
	printf("Vvedite h:");
	scanf("%d", &h);
	
	for (i = 0; i < h; i++) {
		mas [i] = i + 1;
		printf("\t mas [%d] = %d\n", i, mas[i]);
	}
	
	return 0;
}
