#include <stdio.h>

int main(){ 
	int T,d ;
	int aux;
	unsigned long long int num[61] = {0,1};
	
	for(aux = 2; aux < 61; aux++){
			num[aux] = num[aux - 1] + num[aux-2];
		}
					
	scanf("%d",&T);
	while(T--){
		scanf("%d",&d);
		printf("Fib(%d) = %llu\n",d,num[d]);
	}		
	return 0;
}