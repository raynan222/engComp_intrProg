#include <stdio.h>
int main()
{	
	int n, i = 1;
	int var,var2,aux,aux2;
	

	printf("Digite 2 informaoces para a troca ser realizada(i1,i2)\n");
	scanf("%d %d",&var,&var2);
	aux2 = var2;
	aux = var;


	printf("%d%d\n",var,var2);

	for(n = 0; n < (sizeof(var)*8);n++){
		if(((var & i)% 2) != ((var2 & i)% 2 )){
			if((var & i)%2 == 1)
				var2 = var2 | i;
			else
				var2 = var2 & ~i;
		}
	//var = var >> 1;
	//var2 = var2 >> 1;
		i  = i << 1;
	}

	var = aux;
	int j = 1;

	
	for(n = 0; n < (sizeof(var)*8);n++){
		if(((aux2 & j)% 2) != ((var & j)% 2 )){
			if((aux2 & j)%2 == 1)
				var = var | j;
			else
				var = var & ~j;
		}
	//var = var >> 1;
	//var2 = var2 >> 1;
		j = j << 1;
	}
	
	printf("%d %d\n",var,var2);

	return 0;
}