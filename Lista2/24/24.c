#include<stdio.h>
#define INT_MAX 2147483647
int main()
{
	int i,j[400] = {0 ,0 ,1};
	int count = 0;

	printf("Digite um inteiro.\n");
	scanf("%d",&i);

	int aux;
	int aux2;
	int a,b = 0;

	for(aux = 3;aux < 400;aux++){
		j[aux] = 1;
		for (a = 2; a < aux;a++){

		//	printf("%d. %d\n",aux,a);
			if (aux%a == 0 && aux != a){
			//	printf("MUDOU\n");
				j[aux] = 0;
			//		printf(" %d*\n",j[aux]);
				break;  
			}
		//	printf(" %d*\n",j[aux]);
			
		}
	}
	
	int k = 0;
	aux = 0;
	aux2 = 0;
	while(aux < 400 && aux2 != i){
	//	printf("%d,",j[aux] );
		if (j[aux] == 1){
			count += aux;
			aux2++;
		
		}
		aux++;
	
	}

	printf("A soma dos %d primeiros numeros primos eh %d.\n",i,count );
	return 0;
}