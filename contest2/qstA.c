#include<stdio.h>
#include<string.h>

char ent[1000];
char entrada[1000];
int fim = 0;


void pop(){
	int a;
	for(a = 0; a <fim;a++){
		entrada[a] = entrada[a+1];
	}
	fim--;
}
void popEsp(int aux, char entrada[]){
		int a;
	
		for(a = aux; a < fim;a++){
			
			entrada[a] = entrada[a+1];
		}
	
	fim--;
}

void popEsp2(int aux, char entrada[]){
	int a;
	
	if(aux <= fim){
		for(a = aux; a < fim;a++){
			
			entrada[a] = entrada[a+1];
		}
	}
	fim--;
}

void limpar(char entrada[]){
	int a = 0;
	
	for(a = 0;a<fim;a++){
		
	
		if(entrada[a] == '.'){
			popEsp(a,entrada);
		
		}

	}
	
}


void limparRemake(char entrada[]){

	int a,cont = 0;
		do{
			cont = 0;
			for(a = 0; a < fim; a++){
				cont = (entrada[a] == '.' ? cont + 1: cont);
				
				limpar(entrada);
			}
						
		}while(cont);


}
int contar(){
	int cont = 0, i= 0,j = 1;
	int a;
	for(a = 0;a < fim && fim >= 2;a++){
		if(entrada[i] == '<' && entrada[j] == '>' && fim != 1) {
				
			cont++;
		
			
			popEsp2(i,entrada);
			popEsp2(i,entrada);
			
			i--;
			j--;
						
			a -=2;	

		}else{
			i++;
			j++;
		}

	}	

	return cont;
}		
		
		
		
int main(){
	int T;
	scanf("%d",&T);
	
	while(T--){
		
		scanf("%s",entrada);
		
	
		fim = strlen(entrada);	
		limparRemake(entrada);
		printf("%d\n",contar());
			
	}

	return 0;
}