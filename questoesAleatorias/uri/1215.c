#include <stdio.h> 
#include <string.h> 

int contaCaracEsp(char str[]){
    int j,qnt = 0;
    for(j = 0; j < strlen(str) ; j++){ 
            if(str[j] >'z' || str[j] < 'a')
                qnt++; 
    }      
    return qnt;
}

int main(){ 
    int i = 0, count = 0; 
    char V[5123][210];
 

    int z =0;


    while( scanf("%[^\n]s", V[i++]) != EOF){ 
        int j; 


        for(j = 0; j < strlen(V[i-1]) ; j++){ 
            if(V[i-1][j] >= 'A' && V[i-1][j] <= 'Z'){ 
                V[i-1][j] =V[i-1][j] + 32; 

            }       
        }     
        

        int x = contaCaracEsp(V[i-1]);
        while(x--){ 
            j = 0;
            for(j = 0; j < strlen(V[i-1]) ; j++){ 
                int tam = strlen(V[i-1]);
                if(V[i-1][j] > 'z' || V[i-1][j] < 'a' || V[i-1][j] == ' '){ 
                    V[i-1][j] = '\0'; 

                    int k = 0,l = 0; 
                    
                    for(k = j +1 ;k < tam+j+1; k++){ 
                        V[i][l++] = V[i-1][k]; 
                    } 

                    V[i][l] = '\0'; 
               
                }       
            }           
            
            i++;
        }  




        int f,a;
        for (a = 0; a < i; a++){
            if(V[a][0] == '\0' ){
                for (f = a; f < i; f++){
                    strcpy(V[f],V[f+1]);
                }
                
            i--; 
            }
        
            if( V[a][0] == '\0'){
               a--;       
            }
        
        } 

        setbuf(stdin, NULL);
   
    } 
    int x,j;
    for (x = 1; x < i; x++){
        char key[201];
        strcpy(key,V[x]);
        j = x -1;
        while(j >= 0 && (strcmp(key,V[j]) > 0? 0 :1)){
            strcpy(V[j+1],V[j]);
            j--;

 
        }
        strcpy(V[j+1], key);

    }
      int f,a;
    for (a = 0; a < i; a++){
        if((strcmp(V[a],V[a+1]) == 0? 1:0)){
            for (f = a; f < i; f++){
                strcpy(V[f],V[f+1]);
            }
            
        i--; 
        }
    
        if((strcmp(V[a],V[a+1]) == 0? 1:0)){
           a--;       
        }
    
    } 

    
    for (a = 0; a < i-1 && a < 5000; a++){

        printf("%s\n", V[a]);
    }

    return 0; 
}