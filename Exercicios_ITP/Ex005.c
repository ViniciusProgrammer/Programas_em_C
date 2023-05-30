#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int quantidade_cada_de_letra[26] = {0};
    int i;

    scanf("%100[^\n]", palavra);

    for(i = 0; i < strlen(palavra); i++) {
        if(palavra[i] >= 'a' && palavra[i] <= 'z') {
            quantidade_cada_de_letra[palavra[i] - 'a']++;
        }
        else if(palavra[i] >= 'A' && palavra[i] <= 'Z') {
            quantidade_cada_de_letra[palavra[i] - 'A']++;
        }    
    }

    for(int i = 0; i < 26; i++) {
        if(quantidade_cada_de_letra[i] > 0) {
            printf("%c: %d\n", i + 'a', quantidade_cada_de_letra[i]);
        }
    }

    return 0;
}