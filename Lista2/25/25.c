#include <stdio.h>
int main()
{
	int n1,n2, maior = 0;
	for(n1 = 100; n1 < 999; n1++){
		for (n2 = 100; n2 < 999; n2++ ){
			int mut, auxiliar,pal = 0;
			mut = n1*n2;
			auxiliar = mut;
			
			while(mut > 0){
				pal = pal*10 + mut%10;
				 mut = mut /10;
			}

			if (auxiliar == pal){
				if(pal > maior)
					maior = pal;
			}

		}

	}		
	printf("O maior palindromo é %d\n",maior);
	return 0;
}