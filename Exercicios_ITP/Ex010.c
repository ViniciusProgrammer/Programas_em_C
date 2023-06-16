#include <stdio.h>

int tamanho(int n, char str[]){
  int count = 0;
  
  while(count < n && str[count] != '\0'){
    count = count + 1;
  }
  
  return count;
}

int converter(int start, int end, char str[]){
    int valor = 0;
    int potencia = 1;
    
    for(int i=end-1;i>=start;i--){
        valor = valor + potencia * (str[i] - '0');
        potencia = potencia * 10;
    }
    return valor;
}

int eh_digito(char c){
    return c >= '0' && c <= '9';
}

int eh_separdor(char c){
    return c == '/' || c == '-';
}

int extrair(int n, char palavra [], int * dia, int * mes, int * ano){
    int valido = 0;
    
    if(tamanho(n, palavra) == 10){
        int digitos [8] = {0, 1, 3, 4, 6, 7, 8, 9};
        int num_dig_valido = 0;
       
        for(int i=0;i<8;i++){
            if(eh_digito(palavra[digitos[i]])){
                num_dig_valido++;
            }
        }
        
        int separador [2] = {2, 5};
        int num_sep_valido = 0;
       
        for(int i=0;i<2;i++){
            if(eh_separdor(palavra[separador[i]])){
                num_sep_valido++;
            }
        }
        
        valido = num_dig_valido == 8 && num_sep_valido == 2;
        
        if(valido){
            *dia = converter(0, 2, palavra);
            *mes = converter(3, 5, palavra);
            *ano = converter(6, 10, palavra);
        }
    }
    return valido;
}

int palavra_final(int n, char palavra[]){
    int tam = tamanho(255, palavra);
    
    return tam == 3 && palavra[0] == 'F' && palavra[1] == 'I' && palavra[2] == 'M';
}

int main(){
    char palavra [256];
    scanf(" %256s", palavra);
   
    while(!palavra_final(256, palavra)){
        int dia, mes, ano;
       
        if(extrair(256, palavra, &dia, &mes, &ano)){
            printf("%02d/%02d/%04d\n", dia, mes, ano);
            break;
        }
        else {
            printf("INVALIDO!\n");
            break;
        }
        scanf(" %256s", palavra);
    }
    return 0;
}
