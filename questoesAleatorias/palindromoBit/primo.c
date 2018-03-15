#include<stdio.h>
int main(){
	int a = 0;
	printf("Digite um inteiro(-1<n<11).\n");
	scanf("%d",&a);
	
	if(a < 0 || a >10)
		printf("Numero invalido.\n");
		
	int cont = 0;
	
	cont = (a%2 != 0?cont : cont+1);
	cont = (a%3 != 0?cont : cont+1);
	cont = (a%4 != 0?cont : cont+1);
	cont = (a%5 != 0?cont : cont+1);
	cont = (a%6 != 0?cont : cont+1);
	cont = (a%7 != 0?cont : cont+1);
	cont = (a%8 != 0?cont : cont+1);
	cont = (a%9 != 0?cont : cont+1);
	
	if(cont > 1)
		printf("Numero nao primo.\n");
	else	
		printf("Numero primo.\n");


	return 0 ;
}
