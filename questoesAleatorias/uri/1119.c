#include <stdio.h>
#define TAM 20


int v[TAM];
int fim = 0;
int n;

// protótipos
void remover(int pos);

int main() {

	int i, k, m;
	int pos1, pos2;


	scanf("%d %d %d", &n, &k, &m);
	pos1 = 0;
	pos2 = 0;
	// 0 1 2 3 4 5 6 7 8 9
	// 1 2 3 5 6 7 9 10

	while(n && k && m) {
		//-- inicializa vetor v
		for(i = 1; i<=n; v[i-1]=i++, fim++);
			
		pos1 = pos1 + (k % n - 1); 
		pos2 = n - (m % n); 

		while(fim > 0){
			int aux;
			
			if(fim == 0){
				
				break;
			}

		//	int g;
		//	for(g = 0; g < fim;g++)
		//		printf("%d",v[g]);
		//	printf("\n");
			
		//	printf("%d",fim);
		//	printf("\n");
			
			if(pos1 != pos2)
				if(fim == 1)
					printf("  %d", v[pos1]);
				else
					printf("  %d,  %d,", v[pos1], v[pos2]);
				
			//printf("pos1 = %d, pos2 = %d\n\n", pos1, pos2);
			else{
				if(fim == 1)
					printf("  %d", v[pos1]);
				else	
					printf("  %d,", v[pos1]);
			}



			if(pos1 == pos2)
				remover(pos1);
			else {
				
				remover(pos1);
				if(pos2 > pos1){
					--pos2;
					--pos1;
				}else{
					
				}
				
				remover(pos2);
			}

		//	for(g = 0; g < fim;g++)
		//		printf("%d",v[g]);
		//	
		//	printf("\n");

			
			pos1 += k; 
			pos2 = pos2 - (m % n) ; 
			
			if(pos2 < 0)
				pos2 = n + pos2;
			if(pos1 > fim){
				pos1 = (pos1%fim);
				if(pos1 >= 2){
					pos1 -=2;
					
				}
			}
		}

		printf("\n");
		pos1 = 0;
		pos2 = 0;
		fim = 0;
		scanf("%d %d %d", &n, &k, &m);
	}

	return 0;
}

void remover(int pos) {
	int i;
	for(i = pos; i < fim; i++)
		v[i] = v[i+1];

	fim--;
	n--;
}