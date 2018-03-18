#include <stdio.h>

int main(){ 

	int T,d ;
	int aux;
					
	scanf("%d",&T);
	while(T--){
		scanf("%d",&d);
		if(d>3){
			switch((d%4 )){
				case 0:
					printf("1\n");

				break;
				case 1:
					printf("7\n");

				break;			
				case 2:
					printf("9\n");

				break;
				
				case 3:
					printf("3\n");

				break;
			}		

		}	
		else if(d<4){
			switch(d){
				case 0:
					printf("1\n");

				break;
				case 1:
					printf("7\n");

				break;			
				case 2:
					printf("9\n");

				break;
				case 3:
					printf("3\n");

				break;
			}		
		}
	}		
	return 0;
}
		
