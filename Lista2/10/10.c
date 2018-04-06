#include <stdio.h>

#define INT_MAX 2147483647


int main()
{	
	int menor,maior,i,count = 0;

	menor = INT_MAX;
	maior = -INT_MAX;	
	int n;
	for(n = 0; n < 10;n++){
		scanf("%d",&i);
		if (i < menor)
			menor = i;
		if (i > maior)
			maior = i;
	
	}

	printf("O maior valor eh %d.\n", maior);
	printf("O menor valor eh %d.\n", menor);
	return 0;
}