#include<stdio.h>
#define INT_MAX 2147483647
int main()
{
	int i,j[200];
	int count = 0;
	int bool = 1;

	printf("Digite um inteiro.\n");
	scanf("%d",&i);

	int aux = 0;
	int aux2 = i;
	int a,b = 0;
	for(;aux < i+1;aux++){
		for (a = 1; a < i;a++){
			if(aux%a != 0){
				bool = 0;
				break;
			}
			if(a != aux)
				bool = 1;


		}
		if (bool == 1)
			j[count++] = aux;

	}
	printf("O numero %d %s primo.\n",i,(bool == 0?"nao eh": "eh") );
	return 0;
}