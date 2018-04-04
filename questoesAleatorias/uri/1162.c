#include <stdio.h>
int main(){
	int fim,count,N,M,L,i,j, aux;
	
	scanf("%d",&N);
		
	while(N--){
		
		int A[100];
		
		count = 0;
		scanf("%d",&M);		
		fim = M;
				
		int k;
		for(k = 0; k < M;k++){
			int a;
			scanf("%d",&a);
			A[k] = a;
		}
					
	
		for(i = 1; i < fim; i++){
			aux = A[i];
			j = i - 1;
			while(A[j] > aux && j >= 0){
				A[j + 1] = A[j];
				j--;
				count++;
			}
			A[j + 1] = aux;
		}
		

		printf("Optimal train swapping takes %d swaps.",count);
		printf("\n");		
				
	}	
	return 0;
}
