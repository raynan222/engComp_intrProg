#include <stdio.h>
int main(){
	int a = 1, b =1,c = 1,N = 0;

	scanf("%d",&N);
	
	while(N--){
		a += c;
		c = b;
		b = a;	
		printf("%d ",a);
	}
	printf("\n");
return 0;
}