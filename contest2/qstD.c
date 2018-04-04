#include<stdio.h>

struct node{
	double valor;
	int level;
};

struct node borda[100000];	
int fim = 0;

void push(double valor, int level){
	borda[fim].valor = valor;
	borda[fim].level = level;
	fim++;
}

void pop(){
	int a;
	for(a = 0; a <fim;a++){
		borda[a] = borda[a+1];
	}

}

void vinz(double N,int level){
	push(N*2,level + 1);
	push(N*3,level + 1);
	push(N/2,level + 1);
	push(N/3,level + 1);
	push(N+7,level + 1);
	push(N-7,level + 1);
	level++;
}


int main(){

	int M,N;
	
	scanf("%d %d", &N,&M);
	
	borda[0].valor = N;
	borda[0].level = 0;
		
	while(borda[0].valor != M){
		vinz(borda[0].valor,borda[0].level);
		pop();
	}
	
	printf("%d\n",borda[0].level);
	
	return 0;
}