#include <stdio.h>
#include <string.h>

int main(){
    char str1[40], str2[40];
    
    int i = 0, j = 0, contador = 0;
    
    fgets(str1, 40, stdin);
    fgets(str2, 40, stdin);
    
    for(i = 0; i < strlen(str1); i++){
        str1[i] = tolower(str1[i]);
    }
    
    for(i = 0; i < strlen(str2); i++){
        str2[i] = tolower(str2[i]);
    }
    
    for(i = 0; i < strlen(str2) - 1; i++){
        if(str2[i] == str1[j]){
            j++;
        }
        else if(str2[i] == str2[i - 1]){
            j = 1;
        }
        else{
            j = 0;
        }
        if(j == strlen(str1) - 1){
            contador++;
            j = 0;
        }
    }
    
    printf("Repetições: %d\n", contador);
    
    if(contador != 0){
        printf("Posições:");
        
        for(i = 0; i < strlen(str2) - 1; i++){
            if(str2[i] == str1[j]){
                j++;
            }
            else if(str2[i] == str2[i - 1]){
                j = 1;
            }
            else{
                j = 0;
            }
            if(j == strlen(str1) - 1){
                printf(" %d", i - (j - 1));
            }
        }
    }
    
    
    return 0;
}