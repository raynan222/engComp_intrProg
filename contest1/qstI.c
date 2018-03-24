#include <stdio.h>

int main(){
	int n, m, a, b, i, j, k, l,p,q,s,aux = 0;

		while(scanf("%d %d", &n, &m) && (n || m)){

			char matriz[101][101]= {0};
			l = 0;
			for (i = 0 ; i < n; i++){
				char str[m];
				scanf("%s",str);
					
				for (j = 0; j < m; j++){
					matriz[i][j] = str[j];
				}	
			}		
		
			for (i = 0 ; i < n; i++){
				for (j = 0; j < m; j++){
		
				}	
			}		
			
			scanf("%d %d", &a, &b);
			
			if(a != 0 && b!= 0){
				for(k =  0; k <= (a/(a/n));k++){

						for(aux =  0; aux < (a/n);aux++){
							for(q = 0; q < (b/m);q++){

								for(j=0; j < b/(b/m); j++){
									printf("%c",matriz[k][q]);	

								}

							}
							if(l < a){
								printf("\n");
								l++;	
							}

						}
					}
				}
			
			printf("\n");
		}

	return 0;
}