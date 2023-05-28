#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i = 0;
    char palavra[60];
    
    scanf("%60[^\n]", palavra);

    palavra[i] = toupper(palavra[i]);

    while(palavra[i] != '\0'){
        if(palavra[i] == ' '){
            palavra[i+1] = toupper(palavra[i + 1]);
        }
        else{
            palavra[i + 1] = tolower(palavra[i + 1]);
        } 
        i++;
    }

    printf("%s\n", palavra);

    return 0;
}