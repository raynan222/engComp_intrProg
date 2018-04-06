#include <stdio.h>
int main()
{	
	int i;

	printf("Digite um inteiro.\n");
	scanf("%d",&i);

	printf("%d notas de 100.\n", (i >= 100? i/100: 0));
	i = i%100;
	printf("%d notas de 50.\n", (i >= 50? i/50: 0));
	i = i%50;
	printf("%d notas de 20.\n", (i >= 20? i/20: 0));
	i = i%20;
	printf("%d notas de 10.\n", (i >= 10? i/100: 0));
	i = i%10;
	printf("%d notas de 2.\n", (i >= 2? i/2: 0));
	i = i%2;
	printf("%d notas de 1.\n", (i >= 1? i: 0));
	
	return 0;
}