#include<stdio.h>
int main() {
	char texto[11];
	
	int contador ,flag1, flag2 = 0;
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
	
	printf("%d\n", contador);
	
	return 0;
}	