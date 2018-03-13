#include <stdio.h>
int main(){
	
	printf("\n---------------------\n     SUCESSORES\n---------------------\n\n");

	int num=0;
	int num2=0;	
	int num3=0;	
	
	printf("\nEscreva os 3 numeros(n1,n2,n3).\n");
	scanf(" %d,%d,%d", &num,&num2,&num3);
	
	printf("O primeiro numero lido foi o %d \n\tSeus sucessores sao:  %d,%d,%d\n\n", num,(num +1),(num + 2),(num + 3) );
	printf("O segundo numero lido foi o %d \n\tSeus sucessores sao:  %d,%d,%d\n\n", num2,(num2 +1),(num2 + 2),(num2 + 3) );
	printf("O tercerio numero lido foi o %d \n\tSeus sucessores sao:  %d,%d,%d\n\n", num3,(num3 +1),(num3 + 2),(num3 + 3) );
	return 0;		
}