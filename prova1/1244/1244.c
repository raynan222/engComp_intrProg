#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	
	int N;
	scanf("%d",&N);


	while(N--){

		int qntStr = 0;
		int qntStr2 =0;



		char A[100][100];
		char B[100][100];
		setbuf(stdin,NULL);
		



		scanf("%[^\n]s",A[qntStr++]);
		setbuf(stdin, NULL);

			for (int i = 0; i < qntStr +1 ;i++){
				int aux = strlen(A[i]);
				int aux2 = 0;

				for (int j = 0; j < aux +1 ; j++)
				{
					int x = 0;
					
					if((A[i][j] == ' ') || A[i][j] == '\0' ){

						for (int k = aux2; k < j; k++){

							
							B[qntStr2][x++] = A[i][k];

						}

						B[qntStr2][x] = 0;
						B[qntStr2++][j+1] = 0;
						
						aux2 = j+1;
					}

				}

			}
		


		int j,aux3;
		
		int i;
		char key[100],aux[100];
	   	for (i = 1; i < qntStr2-1;i++){
	   		strcpy(key,B[i]);
	   		j = i-1;
	   		while(j >= 0 && strlen(B[j]) < strlen(key)){
	   			strcpy(B[j+1],B[j]);
	   			j--;
	   		}
	   		strcpy(B[j+1],key);
	   	}

		for (int i = 0; i < qntStr2 -1;i++){
			if ((B[i][0] != 0)){

				if((B[i+1][0] == 0))	
					printf("%s",B[i]);
				else if(i == qntStr2-2)
						printf("%s",B[i]);
				else 
						printf("%s ",B[i]);
				
			}

		}	


		printf("\n");
		qntStr = 0;
		qntStr2 =0;
		}


	return 0;
}