#include <stdio.h>
int main()
{	
	int count = 0;
	
	int n;
	for(n = 0; n < 100; n +=2){
//		scanf("%d",&i)
		printf("%d\n",n);
		count += n;
	}

	printf("A soma eh %d.\n",count);

	return 0;
}