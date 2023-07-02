#include <stdio.h>
#include <string.h>

typedef struct{
    char modelo[15];
    char marca[15];
    int ano;
    float preco;
}dados_carro;

int main() {
    dados_carro carro1, carro2;
    
    scanf("%s", carro1.modelo);
    scanf("%s", carro1.marca);
    scanf("%d", &carro1.ano);
    scanf("%f", &carro1.preco);
    
    scanf("%s", carro2.modelo);
    scanf("%s", carro2.marca);
    scanf("%d", &carro2.ano);
    scanf("%f", &carro2.preco);

    if (carro1.ano < carro2.ano) {
        printf("%s %s\n", carro1.marca, carro1.modelo);
    } else if (carro2.ano < carro1.ano) {
        printf("%s %s\n", carro2.marca, carro2.modelo);
    } else {
        
        if (carro1.preco < carro2.preco) {
            printf("%s %s\n", carro1.marca, carro1.modelo);
        } else {
            printf("%s %s\n", carro2.marca, carro2.modelo);
        }
    }
    
    return 0;
}
