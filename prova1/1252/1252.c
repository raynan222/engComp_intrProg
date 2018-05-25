#include <stdio.h>
int main(){
    int tam, auxTam;
    int mod, valor, aux;
    int A[10000];
   
    int contador = 0, flag;
    scanf("%d %d", &tam, &mod);

    while(tam != 0 && mod != 0){
        
        
        auxTam = tam;
                
        while(auxTam--){
            
            flag = 0;
            scanf("%d", &valor);
            
            if(!contador){
                
            A[0] = valor;
                
            }else{
                aux = contador - 1;
                
                while(aux >= 0 && flag == 0){
                    if(valor%mod < 
                A[aux]%mod){
                        
                A[aux + 1] = A[aux];
                aux--;
                        
                }else if(valor%mod == A[aux]%mod){
                        
                        if(valor%2 != 0 && 
                    A[aux]%2 != 0 && valor > 
                    A[aux]){
                            
                    A[aux + 1] = A[aux];
                    aux--;
                            
                }else if(valor%2 != 0 && A[aux]%2 == 0){
                            
                    A[aux + 1] = 
                    A[aux];
                    aux--;
                            
                }else if(valor%2 == 0 && A[aux]%2 == 0 && valor <  A[aux]){
                            
                    A[aux + 1] = A[aux];
                    aux--;
                            
                    }else{
                            
                    A[aux + 1] = valor;
                            flag = 1;
                        }
                        
                    }else{
                        break;
                    }
                }
                if(!flag){
                    
            A[aux + 1] = valor;
                }
            }
            contador++;
        }
        
        printf("%d %d\n", tam, mod);
        
        for(aux = 0; aux < contador; aux++){
            printf("%d\n", 
        A[aux]);
        }
        
        scanf("%d %d", &tam, &mod);
        
        if(!tam && !mod){
            printf("%d %d\n", tam, mod);
        }
        
    }
    return 0;
}