#include <stdio.h>
int main()
{	
	int i;
	int count = 0;

	printf("Digite um inteiro.\n");
	scanf("%d",&i);
	
	int n;
	for(n = 0; n < (sizeof(i)*8);n++){
		count = ((i & 1)% 2 == 1?count+1:count);
		i = i >> 1;
	}

	printf("O total de bits 1 eh: %d\n", count);
	return 0;
}