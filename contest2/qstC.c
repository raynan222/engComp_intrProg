#include<stdio.h>
#include<string.h>

struct node{
	int pos;
	char letra;	
};

char fim[27];
struct node pal1[27];
struct node pal2[27];
int fim = 0;
int pos = 0;
char str1[27];
char str2[27];


void push(char letra, struct node palavra[]){
	palavra[fim].letra = letra;
	palavra[fim].pos = pos++;
	
	fim++;
}

char pop(struct node palavra[]){
	char b = palavra[fim].letra;
	
	palavra[fim].letra = 0;
	palavra[fim].pos = 0;
	pos--;
	fim--;

	return b;
}

void tratarString(int tam){

	int a;
	int aux;
		
	for(a = 0 ;str1[a]&& a < (tam *2)-1; a++){
		if(str1[a] != ' '){
			push(str1[a],pal1);
		}
	}
	

	for(a = 0 ;str2[a]&& a < (tam *2)-1; a++){
		if(str2[a] != ' '){
			push(str2[a],pal2);
		}
	}
	
	
	



}
int main(){

	int T;
	while(1){
		scanf("%d",&T);
		
		if(T != 0){
			scanf("%[^\n]s",str1);
				
			
			tratarString(T);
			
		
			
			printf("\n");
			
		
			
		}else{
			break;
		}
	}
return 0;
}
