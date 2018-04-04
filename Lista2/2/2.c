#include <stdio.h>
int main()
{	
	char ch;
	int count = 0;

	printf("Digite um caractere.\n");
	ch = getchar();
	
	int n;
	for(n = 0; n < (sizeof(char)*8);n++){
		count = ((ch & 1)% 2 == 1?count:count +1 );
		ch = ch >> 1;
	}

	printf("O total de bit 0 eh: %d\n", count);
	return 0;
}