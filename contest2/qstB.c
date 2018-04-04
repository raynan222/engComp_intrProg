#include<stdio.h>

int cartas[51];	
int cartas2[51];
int fim = 0;
int fim2 = 0;

void push(int item){
	cartas[fim++] = item;
}

int pop(){
	cartas[fim] = 0;
	fim--;
	
}

void pushFront(){
	int a;
	fim++;
	int aux = fim;
	for(a = 0;a < fim; a++){
		cartas[aux--] = cartas[aux];
	}
	pop();
	cartas[0] = cartas[fim];
}


void fill(int T){
	int a;
	for(a = T; a != 0; a--){
		push(a);
	}

}

void remakeStack(){
	int a;
	for(a = 0; a < fim; a++ ){
		cartas[a] = 0;
	}
	int fim = 0;
}

int main(){

	int T;
	
	while(1){
		scanf("%d",&T);
		if(T !=0){
			fill(T);

			int i = 0;
			int z;
			if(fim != 0){

				for(z = 0; z < T;z++){
					cartas2[i++] = cartas[fim-1];
					pop();
					pushFront();
				}
			}
			printf("Discarted cards:");
			for(z = 0; z < T-1;z++)
				if(z == 0 )
					printf(" %d",cartas2[z]);
				else
					printf(", %d",cartas2[z]);

			printf("\n");
			printf("Remaining card: %d\n",cartas[0]);

			remakeStack();
		}else{
			break;
		}
}

return 0;
}