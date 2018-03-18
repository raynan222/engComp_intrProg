#include<stdio.h>
#include<string.h>

int main ( ) {
    char str[999];
    int aux1, aux2,aux3,aux4;

    while ( scanf ( "%s", str ) != EOF ) {
        int tam = strlen(str);

        for (aux1=0; aux1<tam; aux1++ ) {
            aux3 = 0;
            for(aux4 = tam - aux1 ;aux4< tam;aux4++){
			printf(" ");
			}
			for ( aux2 = tam - 1 - aux1; aux2 >= 0; aux2-- ) {
                printf ( "%c", str[aux3++] );
                if ( aux2 > 0 ) printf ( " " );
            }
            puts ( "" );
        }
        puts ( "" );
    }
}