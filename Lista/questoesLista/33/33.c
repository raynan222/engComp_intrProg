#include <stdio.h>
int main(){
	
	printf("\n---------------------\n     SUCESSORES\n---------------------\n");

	int num=0;
	
	
	printf("\nEscreva um inteiro.\n");
	scanf("%d", &num);
	
	printf("O numero lido foi o:\t\t%d\n", num);
	printf("O dobro do numero lido:\t\t%d\n", num << 1);
	printf("A metade do numero lido:\t%d\n", num>>1 );
	return 0;		
}