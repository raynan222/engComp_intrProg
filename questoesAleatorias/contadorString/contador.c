#include<stdio.h>
int main() {
	char texto[11];

	int contador ,flag1, flag2 = 0;

		int cont (char a[11]){
		for( int i = 0; flag1 == 0; i++){
			
			if (a[i] == '\0'){
				flag1 = 1;
			}

			else{
				flag1 = 0;
				contador ++;
			}		
		}
	
		return contador;
	} 	

	gets(texto);
	
	cont(texto);
	printf("%d\n", contador);
	
	return 0;
}	