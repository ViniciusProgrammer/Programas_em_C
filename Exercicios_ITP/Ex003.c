#include <stdio.h>
#include <string.h>

int main()
{
    char str_principal[30], str1[30], str2[30];
    char caracter;
    
    int i, j, t;
    
    scanf("%30[^\n]", str_principal);
    scanf(" %c", &caracter);
    
    for(i = 0; i < strlen(str_principal); i++){
        if(str_principal[i] != caracter){
            str1[i] = str_principal[i];
        }
        else{
            str1[i] = '\0';
            for(t = i; t < strlen(str_principal); t++){
                str2[j] = str_principal[t+1];
                j++;
            }
        }
    }
    
    printf("Primeira parte: %s\n", str1);
    printf("Segunda parte: %s\n", str2);
    
    return 0;
}
