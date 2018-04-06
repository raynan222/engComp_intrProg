#include <stdio.h>
int main()
{	
	int i,j = 1,k;
	int count = 0;

	printf("Digite um inteiro.\n");
	scanf("%d",&i);
	
	int n;
	for(n = 1; n < i+1;n++){

		for (k = 1; k < n+1;k++){
			printf("%3d    ", j++);
		}
		printf("\n");
	}

	return 0;
}