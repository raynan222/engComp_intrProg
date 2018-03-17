#include <stdio.h>
#include <stdlib.h>
int main(){ 
	int a,i,entrada = 0;
	int num[11] ={0};
	char texto[11];
	int q, r,n1,n3,n4,n,aux3,aux  = 0; 
	
	float n2=0;
		
	int contador ,flag1, flag2 = 0;
	scanf("%s",texto);
		printf("\nTOP\n");

	contador = (texto[0] != '\0'? contador +1 : contador);
	num[i] = (flag1 !=1?(int)(texto[i] - 48):num[i]);
	i++;
	flag1 = ( flag1 == 1? 1 :(texto[0] != '\0' ? 0:1));
		
	contador = (texto[1] != '\0' && flag1 == 0? contador + 1 : contador);
	num[i] = (flag1 !=1?(int)(texto[i] - 48):num[i]);
	i++;
	flag1 = ( flag1 == 1? 1 :(texto[1] != '\0' ? 0:1));
	
	contador = (texto[2] != '\0' && flag1 == 0? contador + 1 : contador);
	num[i] = (flag1 !=1?(int)(texto[i] - 48):num[i]);
	i++;
	flag1 = ( flag1 == 1? 1 :(texto[2] != '\0' ? 0:1));
	
	contador = (texto[3] != '\0' && flag1 == 0? contador + 1 : contador);
	num[i] = (flag1 !=1?(int)(texto[i] - 48):num[i]);
	i++;
	flag1 = ( flag1 == 1? 1 :(texto[3] != '\0' ? 0:1));
	
	contador = (texto[4] != '\0' && flag1 == 0? contador + 1 : contador);
	num[i] = (flag1 !=1?(int)(texto[i] - 48):num[i]);
	i++;
	flag1 = ( flag1 == 1? 1 :(texto[4] != '\0' ? 0:1));
	
	contador = (texto[5] != '\0' && flag1 == 0? contador + 1 : contador);
	num[i] = (flag1 !=1?(int)(texto[i] - 48):num[i]);
	i++;
	flag1 = ( flag1 == 1? 1 :(texto[5] != '\0' ? 0:1));
	
	contador = (texto[6] != '\0' && flag1 == 0? contador + 1 : contador);
	num[i] = (flag1 !=1?(int)(texto[i] - 48):num[i]);
	i++;
	flag1 = ( flag1 == 1? 1 :(texto[6] != '\0' ? 0:1));
	
	contador = (texto[7] != '\0' && flag1 == 0? contador + 1 : contador);
	num[i] = (flag1 !=1?(int)(texto[i] - 48):num[i]);
	i++;
	flag1 = ( flag1 == 1? 1 :(texto[7] != '\0' ? 0:1));
	
	contador = (texto[8] != '\0' && flag1 == 0? contador + 1 : contador);
	num[i] = (flag1 !=1?(int)(texto[i] - 48):num[i]);
	i++;
	flag1 = ( flag1 == 1? 1 :(texto[8] != '\0' ? 0:1));
	
	contador = (texto[9] != '\0' && flag1 == 0? contador + 1 : contador);
	num[i] = (flag1 !=1?(int)(texto[i] - 48):num[i]);
	flag1 = ( flag1 == 1? 1 :(texto[9] != '\0' ? 0:1));

	printf("\nTOP\n");

	aux = contador;	
	
		printf("\nTOP\n");

	int flag3,aux5,aux6 = 0;
	
	flag3 = (flag3 == 1?1:(num[aux6] =='\0'?1:0));
	entrada = (flag3 =!1? + num[10-aux6]*1000000000:entrada);
	aux6++;

		printf("\n%d\n",num[10-aux6]);

	flag3 = (flag3 == 1?1:(num[aux6] =='\0'?1:0));
	entrada = (flag3 =!1? + num[10-aux6]*100000000:entrada);
	aux6++;	
		printf("\n%d\n",num[10-aux6]);
	flag3 = (flag3 == 1?1:(num[aux6] =='\0'?1:0));
	entrada = (flag3 =!1? + num[10-aux6]*10000000:entrada);
	aux6++;	
	
	flag3 = (flag3 == 1?1:(num[aux6] =='\0'?1:0));
	entrada = (flag3 =!1? + num[10-aux6]*1000000:entrada);
	aux6++;	

	flag3 = (flag3 == 1?1:(num[aux6] =='\0'?1:0));
	entrada = (flag3 =!1? + num[10-aux6]*100000:entrada);
	aux6++;	
	
	flag3 = (flag3 == 1?1:(num[aux6] =='\0'?1:0));
	entrada = (flag3 =!1? + num[10-aux6]*10000:entrada);
	aux6++;	
	
	flag3 = (flag3 == 1?1:(num[aux6] =='\0'?1:0));
	entrada = (flag3 =!1? + num[10-aux6]*1000:entrada);
	aux6++;	
	
	flag3 = (flag3 == 1?1:(num[aux6] =='\0'?1:0));
	entrada = (flag3 =!1? + num[10-aux6]*100:entrada);
	aux6++;	
	printf("\n%d,%d,%d\n",num[10-aux6],flag3,entrada);
	flag3 = (flag3 == 1?1:(num[aux6] =='\0'?1:0));
	entrada = (flag3 =!1? + num[10-aux6]*10:entrada);
	aux6++;	
	printf("\n%d\n",num[10-aux6]);
	
	flag3 = (flag3 == 1?1:(num[aux6] =='\0'?1:0));
	entrada = (flag3 =!1? + num[10-aux6]*1:entrada);
	aux6++;		
	printf("\n%d\n",num[10-aux6]);
	
	printf("%d!%d\n", contador,entrada);

		printf("\nTOP\n");

	
	teste:	
	if(0){
		
	switch(aux - (a+1)){
			case 0:		
				aux3 = 1;
			break;

			case 1:		
				aux3 = 10;
			break;

			case 2:		
				aux3 = 100;
			break;

			case 3:		
				aux3 = 1000;
			break;

			case 4:		
				aux3 = 10000;
			break;

			case 5:		
				aux3 = 100000;
			break;

			case 6:		
				aux3 = 1000000;
			break;

			case 7:		
				aux3 = 10000000;
			break;

			case 8:		
				aux3 = 100000000;
			break;

			case 9:		
				aux3 = 1000000000;
			break;
		}
		
		q = (n >> 1) + (n >> 2);
		q = q + (q >> 4);
		q = q + (q >> 8);
		q = q + (q >> 16);
		q = q >> 3;
		r = n - (((q << 2) + q) << 1);
		n1 = q + (r > 9);
		
		n2 = n1/aux3;
		n2 = (int)n2;
		n2 *= aux3;
		n3 = n1-n2;
		n3 *= aux3;
		
		n4 += n3;
		printf("\n%d\n",n4);
		
		
		if(a < contador){}	
			a++;	
			goto teste;			
		}
		
		
			
	
return 0;
}