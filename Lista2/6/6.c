#include <stdio.h>
int main()
{	
	int n;
	for(n = 1; n < 101;n++){
		printf("%d ",n);
	}

	printf("\n\n");

	int a = 100;
	n = 1;
	while(a--)
		printf("%d ",n++);

	printf("\n\n");
	

	a = 99;
	n = 1;
	do{
		printf("%d ",n++);
	}while(a--);

	printf("\n\n");

	return 0;
}