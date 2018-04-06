#include <stdio.h>
int main()
{	
	int n, i = 1,x = 0;
	unsigned var,var2,aux,aux2;
	

	printf("Digite 2 informaoces para a troca ser realizada(i1,i2)\n");
	scanf("%d %d",&var,&var2);
	aux = var;

	var = var & 0;
	var = var | var2;

	var2 = var2 & 0;
	var2 = var2 | aux;	

	printf("%d %d\n",var,var2);

	return 0;
}