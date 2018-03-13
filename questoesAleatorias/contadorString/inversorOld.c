#include<stdio.h>
int main() {
	char texto[11];
	
	printf("\n---------------------\n INVERSOR DE STRINGS\n---------------------\n\n");
	
	
	int contador ,flag1, flag2 = 0;
	printf("Digite um texto.\n");
	scanf("%[^\n]s",texto);
	
	contador = (texto[0] != '\0'? contador +1 : contador);
	flag1 = ( flag1 == 1? 1 :(texto[0] != '\0' ? 0:1));
	
	contador = (texto[1] != '\0' && flag1 == 0? contador + 1 : contador);
	flag1 = ( flag1 == 1? 1 :(texto[1] != '\0' ? 0:1));
	
	contador = (texto[2] != '\0' && flag1 == 0? contador + 1 : contador);
	flag1 = ( flag1 == 1? 1 :(texto[2] != '\0' ? 0:1));
	
	contador = (texto[3] != '\0' && flag1 == 0? contador + 1 : contador);
	flag1 = ( flag1 == 1? 1 :(texto[3] != '\0' ? 0:1));
	
	contador = (texto[4] != '\0' && flag1 == 0? contador + 1 : contador);
	flag1 = ( flag1 == 1? 1 :(texto[4] != '\0' ? 0:1));
	
	contador = (texto[5] != '\0' && flag1 == 0? contador + 1 : contador);
	flag1 = ( flag1 == 1? 1 :(texto[5] != '\0' ? 0:1));
	
	contador = (texto[6] != '\0' && flag1 == 0? contador + 1 : contador);
	flag1 = ( flag1 == 1? 1 :(texto[6] != '\0' ? 0:1));
	
	contador = (texto[7] != '\0' && flag1 == 0? contador + 1 : contador);
	flag1 = ( flag1 == 1? 1 :(texto[7] != '\0' ? 0:1));
	
	contador = (texto[8] != '\0' && flag1 == 0? contador + 1 : contador);
	flag1 = ( flag1 == 1? 1 :(texto[8] != '\0' ? 0:1));
	
	contador = (texto[9] != '\0' && flag1 == 0? contador + 1 : contador);
	flag1 = ( flag1 == 1? 1 :(texto[9] != '\0' ? 0:1));
	
	
	printf("\n---------------------\nO tamanho do texto: %d\n---------------------\n", contador);
	
	char texto1[contador];
	
	flag2 = (flag2 == 1? 1 : (texto[contador - 1] != '\0'? 0 : 1));
	texto1[0] = (flag2 == 0? texto[contador-1]:texto[0]);
	
	flag2 = (flag2 == 1? 1 : (texto[contador - 2] != '\0'? 0 : 1));
	texto1[1] =( flag2 == 0? texto[contador - 2]:texto[1] );
		
	flag2 = (flag2 == 1? 1 : (texto[contador - 3] != '\0'? 0 : 1));
	texto1[2] =(flag2 == 0? texto[contador - 3]:texto[2] );
	
	flag2 = (flag2 == 1? 1 : (texto[contador - 4] != '\0'? 0 : 1));
	texto1[3] =(flag2 == 0? texto[contador - 4]:texto[3] );
	
	flag2 = (flag2 == 1? 1 : (texto[contador - 5] != '\0'? 0 : 1));
	texto1[4] =( flag2 == 0? texto[contador - 5]:texto[4] );
	
	flag2 = (flag2 == 1? 1 : (texto[contador - 6] != '\0'? 0 : 1));
	texto1[5] =(flag2 == 0? texto[contador - 6]:texto[5] );
	
	flag2 = (flag2 == 1? 1 : (texto[contador - 7] != '\0'? 0 : 1)); 
	texto1[6] =( flag2 == 0? texto[contador - 7]:texto[6] );
	
	flag2 = (flag2 == 1? 1 : (texto[contador - 8] != '\0'? 0 : 1)); 
	texto1[7] =(flag2 == 0? texto[contador - 8]:texto[7] );
	
	flag2 = (flag2 == 1? 1 : (texto[contador - 9] != '\0'? 0 : 1)); 
	texto1[8] =(flag2 == 0? texto[contador - 9]:texto[8] );
	
	flag2 = (flag2 == 1? 1 : (texto[contador - 10] != '\0'? 0 : 1)); 
	texto1[9] =(flag2 == 0? texto[contador - 10]:texto[9] );
			
	printf("\n---------------------\nO inverso do texto: %s\n---------------------\n", texto1);
	
	return 0;
}	