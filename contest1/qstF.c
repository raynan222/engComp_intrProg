#include <stdio.h>
#include <string.h>

int main(){ 
	
	int aux,N = 0;
	char string[51];
			

	scanf("%d",&N);
		while(N--){
			
			int desloc = 0;
			scanf("%s",string);
			scanf("%d",&desloc);
			
			string[strlen(string)+1] = '\0';
	
			for(aux = 0; string[aux] !='\0'; aux++){
				if((string[aux] - desloc) < 65){
					string[aux] = ((string[aux] - desloc) + 26);
				}
				else
					string[aux] = (string[aux] - desloc);
	
			}	
				
			printf("%s\n",string);
		}		
	
	return 0;
}