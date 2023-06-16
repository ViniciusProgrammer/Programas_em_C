#include<stdio.h>
#include <stdlib.h>

void obter(int n, char email [n], int * start, int * end){
    int encontrou_arroba = 0;
    int encontrou_ponto = 0;
    
    for(int i=0;i<n;i++){
        if(email[i] == '@' && encontrou_arroba == 0){
            encontrou_arroba = 1;
            *start = i;
        }
        
        else if(email[i] == '.' && encontrou_arroba == 1 && encontrou_ponto == 0){
            encontrou_ponto = 1;
            *end = i;
        }
    }
}

int tamanho(int n, char str[n]){
  int count = 0;
  
  while(count < n && str[count] != '\0'){
    count = count + 1;
  }
  return count;
}

int palavra_final(int n, char palavra[]){
    int tam = tamanho(255, palavra);
    
    return tam == 3 && palavra[0] == 'F' && palavra[1] == 'I' && palavra[2] == 'M';
}

int main(){
    
    int start, end;
    char buffer[51];
    scanf("%s", buffer);
    
    while(!palavra_final(51, buffer)){
        obter(51, buffer, &start, &end);
        buffer[end] = '\0';
       
        printf("%s\n", buffer + start + 1);
       
        scanf("%s", buffer);
    }
    return 0;
}