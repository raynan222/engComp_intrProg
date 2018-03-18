#include <stdio.h>
int main(){
	int N = 0;
	
	char str[102];
	scanf("%d",&N);
	
	while(N--){
		scanf("%s",str);
		
		int cont,t = 0;

		for(cont = 0; str[cont] != '\0';cont++){		
			t = (str[cont] == '1'? t+2:(str[cont] == '7'? t+3:(str[cont] == '4'? t+4 :(str[cont] == '2' ||str[cont] == '3' || str[cont] == '5'? t+5:(str[cont] == '0' || str[cont] == '9' || str[cont] == '6'? t+6: t+7)))));
		}	
		printf("%d leds\n",t);
	}		
	
return 0;
}