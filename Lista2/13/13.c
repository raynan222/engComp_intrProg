#include <stdio.h>
#define INT_MAX 2147483647
int main()
{	
	int a = 0;
	int i,aux,V[1000];
	int maior = -INT_MAX;

	scanf("%d",&i);
	aux = i;


	int n;
	while(i--){
		scanf("%d",&n);
		if (n > maior)
			maior = n;
		V[a++] = n;
	}

	int count = 0;
	for (i = 0; i < aux; i++)
	{
		if (V[i] == maior)
			count++;
	}

	if (count == 1)
		printf("O maior numero(%d) apareceu %d vez.\n",maior,count);
	else
		printf("O maior numero(%d) apareceu %d vezes.\n",maior,count);
	return 0;
}