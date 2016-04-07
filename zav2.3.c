#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas[100];
	int h, i, c;
	printf("Vvedite h:");
	scanf("%d", &h);
	
	for(i = 0, c = 1;c < h ;i++, c = c + 2){
		mas [i] = c;
		printf("\t mas [%d] = %d\n", i,c);
	}
	return 0;
}
