#include <stdio.h>

int main(){ 
	int T,d,k,l,m,contE,contD,pares = 0;
		
	int matriz[1001][1001],i, j = {0};
	
	void limparMatriz(){
		pares = 0;
		for (i=0; i<1001; i++ ){
			matriz[i][0] = i;

			for(m=0; m < 1001;m++){
			matriz[i][m] = 0;
			}
		}
	}
	
	int verifPosLiv(int j){
		j -= 30;
		for ( i=1; i<1001; i++ ){
			if(matriz[j][i] == 0){
				return i;
			}
			
		}
	
	}
	
	int verifPares(){
		int x,y,aux = 0;
				
		for(x = 0 ; x < 1001 ; x++){
		
			contE = 0;
			contD = 0;
			aux = 0;
			
			for(y = 1 ; y < 1001 ; y++){
				
				if(matriz[x][y] == 2){
					contE = contE+1;
					matriz[x][y] = 0;
					//printf("contE = %d contD = %d na matriz[%d][%d]\n",contE,contD,x,y);
									
				}
					else if(matriz[x][y] == 3) {
					contD = contD+1;
					matriz[x][y] = 0;
					//printf("contE = %d contD = %d na matriz[%d][%d]\n",contE,contD,x,y);
				}
				if((contD - aux > 0)&&(contE - aux > 0)){
						pares = (contD >= contE? pares + (contE - aux): pares + (contD-aux));
						aux = (contD >= contE? aux + (contE - aux) : aux +(contD - aux));
						// printf("pares = %d\n",pares);
					}
					
				
			}
		
		}	
	
		return pares;
		
	}
		
	for (i=0; i<1001; i++ ){
		matriz[i][0] = i;
		
		for(m=0; m < 1001;m++){
		matriz[i][m] = 0;
		}
	}

	while ( scanf ( "%i", &T ) != EOF ) {
		for(k = 0;k < T ; k++){
			
				char auxc;
				int aux1 = 0;
				
				scanf("%d %c",&aux1,&auxc);
				matriz[aux1-30][verifPosLiv(aux1)] = (auxc == 'E'?2:3);
				
			}
	
	printf("%d\n",verifPares());	
	limparMatriz();
	}		
	
	return 0;
}