#include <stdio.h>
int main()
{	
	double i,k =1;
	double count = 0;

	i = 5;

	double a,n = 1,aux = 1,j;
	for (a = 1; a <= i; a++){
			for (j = 0; j < (a*2); j++){
				aux *= ++n;
			}	
		count =  count + k++/aux;

		n = 1;
		aux = 1;
	}

	printf("E = %.15lf\n", count);
	return 0;
}