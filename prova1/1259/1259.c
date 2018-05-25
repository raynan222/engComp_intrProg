#include <stdio.h>

void printVetor(int *C,int tam){

	for (int i = 0; i < tam;i++ )
	{
		printf("%d,",C[i] );
	}

	printf("\n");

}

int main(int argc, char const *argv[])
{
	int A[100100];
	int B[100100];

	int aux3 = 0,aux2 = 0;
	int N;

	scanf("%d",&N);
	int tam = N;
	
	while(N--){
		int temp1;
		scanf("%d",&temp1);
		if(temp1%2 == 0){
			A[aux3++] = temp1;

			int j = aux3 -1;
				//	printVetor(A,aux3);
			while( j > 0){
						
				if (A[j] < A[j - 1])
				{
					int temp3 = A[j - 1];
					A[j - 1] = A[j];
					A[j] = temp3;

					
				}else{
					break;
				}
				j--;
			}

		}else if(temp1%2 == 1){

			B[aux2++] = temp1;
			int j = aux2 -1;
			//	printVetor(B,aux2);
			while( j > 0){
					
				if (B[j] < B[j - 1])
				{
					int temp = B[j - 1];
					B[j - 1] = B[j];
					B[j] = temp;

					
				}else{
					break;
				}
			
				j--;
			}
			
		}
		
		
			
			

	}

	//printVetor(A,aux3);
	//printVetor(B,aux2);

	for (int i = 0; i < aux3; i++)
	{
		printf("%d\n",A[i]);
	}

	for (int i = aux2-1; i > -1; i--)
	{
		printf("%d\n",B[i]);
	}
	
	
	return 0;
}