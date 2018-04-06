#include <stdio.h>
int main()
{	
	int i,count = 0;
	
	int n;
	for(n = 0; n < 10;n++){
		scanf("%d",&i);
		count += i;
	}

	printf("A soma eh %d.\n", count);

	return 0;
}