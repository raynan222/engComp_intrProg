#include <stdio.h>
int main()
{	
	int i = 3;
	
	int n;
	for(n = 0; n < 5;n++){
		i = 3 * (n+1);
		printf("%d ",i);
	}

	printf("\n");

	return 0;
}