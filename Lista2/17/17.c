#include <stdio.h>
int main(){
	int a = 0, b =0,c = 1,N = 0;

	scanf("%d",&N);
	
	while(a < N){
		printf("%d ",a);
		a += c;
		c = b;
		b = a;	

		
	}
	printf("%d ",a);
	printf("\n");
return 0;
}