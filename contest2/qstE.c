#include <stdio.h>
#include <string.h>

int mastruz(int J,int L){
	int M = 1;
	while(L--)
		M *= J;

	return M;
}

int main() {

	int N;
	int a,c,i = 0,j;
	int D;
	
	int count = 0;

	char getMenor(char str[]) {
			int b = 0;
			int menor = 0;
			for(j = 0;j < strlen(str);j++){
				if(str[j]!='x')
					menor = str[j];
			}

			for (b = 0; str[b]; b++) {
				if (str[b] < menor && str[b] != 'x')
				menor = str[b];
			}
		
			return menor;
		}

	int total(char str[1000]) {
			int b;
			int c = 0;
			count = 0;
		
			
			for (b = (strlen(str) - 1);str[b] != 0 ; b--) {
				if (str[b] != 'x') {
			
					count += (mastruz(10, c) * (str[b] - 48));
					c++;
					
					

				}

			}
			return count;
		}

	
	
		 do{
			scanf("%d %d",&N,&D);
			if(D == 0 && N == 0)
				break;
		

			char str[1000] = { 0 };
			scanf("%s",str);
			
			int s;
			for(s = 0; s < D; s++){
				int aux = getMenor(str);
				for(a = 0; a < strlen(str); a++){
					if(str[a] == aux){
						str[a] = 'x';
						break;
					}	
				}
		 	}			
			 
		
		
			printf("%d\n", total(str));

			for(c = 0;str[c];c++) {
				str[c]='0';
			}
	
		}while (N != 0 && D != 0);
	
	
return 0;
}