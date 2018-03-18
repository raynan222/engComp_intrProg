#include <stdio.h>
#include <string.h>

int main(){ 
	
	int aux1,flag,N = 0;
	
	char str2[1001];
	char str1[1001];		

	scanf("%d",&N);
		while(N--){
			flag = 0;			
			scanf("%s %s",str1,str2);
						
			 if(1){
				for(aux1 = 0; aux1 < strlen(str2); aux1++){
					flag = (flag == 1? 1 :(str2[(strlen(str2) - aux1)-1] == str1[(strlen(str1) - aux1)-1]?0:1));
				}
			}
			if(flag)
				printf("nao encaixa\n");
			else
				printf("encaixa\n");
		}		
	
	return 0;
}