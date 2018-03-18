#include <stdio.h>

int main(){ 
	int T,d,auxpot ;

	int aux,aux2,soma,pot = 0;
	char str[15];
					
	scanf("%d",&T);
	while(T--){
		scanf("%s",str);
		for(aux = 13 ; aux >=0 ;aux--){
			if(str[aux] > 47 && str[aux] <58){
				for(aux2 = 1 ;str[aux-aux2] > 47 && str[aux-aux2] <58;aux2++){
					for(auxpot = 0; auxpot < aux2;){
						pot *=10;	
					}
					soma = soma + ((str[aux-aux2]) - 48 * pot);
				}
			
			}
		printf("%d",soma);
		}		
	}		
	return 0;
}