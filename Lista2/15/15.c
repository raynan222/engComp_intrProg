#include <stdio.h>
int main()
{	
	float i;
	float count = 0;

	printf("Digite um inteiro.\n");
	scanf("%f",&i);

	float a,n = 1,aux = 1,j;
	for (a = 1; a <= i; a++){
			for (j = 0; j < a; j++){
				aux *= ++n;
			}	

		count =  count +1/aux;

		n = 1;
		aux = 1;
	}

	printf("E = %.8f\n", count);
	return 0;
}