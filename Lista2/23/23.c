#include<stdio.h>
#define INT_MAX 2147483647
int main()
{
	int i,j[200];
	int count = 0;
	int bool = 1;

	printf("Digite um inteiro.\n");
	scanf("%d",&i);

	int aux;
	int aux2 = i;
	int a,b = 0;

	for(aux = 0;aux < i+1;aux++){
		for (a = 2; a < i;a++){
			if(aux%a != 0){
				j[aux] = 0;
				bool = 0;
				
			}else{
				bool = 1;
				j[aux] = 1;
				break;
			}
			
		}
	}
	

	printf("O numero %d %s primo.\n",i,(j[i] == 1? "nao eh":"eh") );
	return 0;
}