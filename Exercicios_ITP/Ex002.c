#include <stdio.h>

int conta_strings(char palavra[]){
    int i = 0, contador = 0;
    
    while(palavra[i] != '\0'){
        if(palavra[i] == ' ' || palavra[i] == '\n'){
            contador++;
            if(palavra[i+1] == ' '){
            contador--;
            }
        }
        i++;
    }

    return contador;
}

int main()
{
    char frase[49];
    
    fgets(frase, 49, stdin);
    
    printf("String contem %d palavra(s)\n", conta_strings(frase));
    
    return 0;
}
