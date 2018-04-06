#include <stdio.h>
int main(){

	int bool = 1;
	float vel;

	while(bool){
		printf("\n-----------------------------------------\n");
		printf("--------Conversor-de-Velocidade----------\n");
		printf("-----------------------------------------\n\n");
		printf("-----------------opcoes------------------\n");
		printf("1)Realizar operacao Km/h>M/s\n");
		printf("2)Sair do programa\n\n");

		scanf("%d",&bool);

		switch(bool){
			case 1:
				printf("Digite a velocidade em Km/H\n");
				scanf("%f",&vel);

				vel /=3.6;
				printf("A velocidade em m/s eh: %.4f.\n\n",vel);
			break;

			case 2:
				bool = 0;
			break;
		}
	}
	
	return 0;
}