#include <stdio.h>
int main()
{
	int n1,n2, maior =0;

	for (n1 = 100, n2 =999;n1++ < 999 && n2-- > 100;){
		int mut, auxiliar = 0;
		mut = n1*n2;
		auxiliar = mut;
		
		while(mut > 0){
			mut = mut/10 +mut % 10;
			mut = mut /10;
		}

		if (auxiliar == mut){
			if(mut > maior)
				maior = mut;
		}

	}

	printf("O maior palindromo é %d\n",maior);
	return 0;
}
