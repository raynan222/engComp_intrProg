#include <stdio.h>
int main()
{	
	int i,aux;
	int count = 0;

	printf("Digite um inteiro.\n");
	scanf("%d",&i);
	aux = i;	

	int c = 0,d = 0,u = 0;

	u = i%10;
	i /=10;
	d = i%10;
	i /=10;
	c = i%10;
	i /=10;

	printf("%d – %d centenas, %d dezenas e %d unidades.\n",aux,c,d,u);
	return 0;
}