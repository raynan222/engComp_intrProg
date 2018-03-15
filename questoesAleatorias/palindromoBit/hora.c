#include<stdio.h>
int main(){
	int a = 0;
	printf("Digite um inteiro que represente os segundos.\n");
	scanf("%d",&a);

	int h,m,s = 0;
	
	if(a < 0)
		printf("Numero invalido.\n");
	else if (a < 60)
		s = a;
	else if(a < 3600){
		m = a/60;
		s =  a%60; 
	}else{
		m = a/60;
		s =  a%60; 
	
		if(m >= 60){
			h = m/60;
			m= m%60;
		}
	}	
		
		
	printf("%02d:%02d:%02d\n",h,m,s);
	

	return 0 ;
}
