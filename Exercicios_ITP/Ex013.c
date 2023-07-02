#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Questão de ITP incompleta sobre chapas

typedef struct{
    int id;
    char nome[20];
    int votos;
}chapas;

int computa_votos(int n_votos, int votos[n_votos], int n_partidos,
int partidos[n_partidos], int* mais_votado, int* segundo){

}

int main(){
    int quant_chapas, quant_votos;
    chapas dados;

    scanf("%d", &quant_chapas);

    for(int i = 0; i < quant_chapas; i++){
        scanf("%d %s", dados.id, dados.nome);
    }

    scanf("%d", &quant_votos);

    for(int i = 0; i < quant_votos; i++){
        scanf("%d", &dados.votos);
    }

    return 0;
}