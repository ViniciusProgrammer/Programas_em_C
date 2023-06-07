#include <stdio.h>
#include <string.h>

int main(){
    char A[40], B[40], C[80];
    
    scanf("%[^\n]s", A);
    scanf(" %[^\n]s", B);
    
    int contador = 0;
    int pos = 0;
    
    if(strlen(A) > strlen(B)){
        contador = strlen(A);
    }
    else{
        contador = strlen(B);
    }
    
    for(int i = 0; i < contador; i++){
        if(A[i] != '\0'){
            C[pos] = A[i];
            pos++;
        }
        if(B[i] != '\0'){
            C[pos] = B[i];
            pos++;
        }
    }
    
    C[pos] = '\0';
    
    printf("%s\n", C);
    
    return 0;
}