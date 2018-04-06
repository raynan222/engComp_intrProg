#include <stdio.h>
int main()
{	
	int i;
	int count = 0;

	printf("Digite um inteiro.\n");
	scanf("%d",&i);
	
	int n;
	for(n = 1; n < i+1;n++){

		for (j = n; j <= n; j++){
			printf("%d   ", j);
		}
		printf("\n");
	}

	return 0;
}