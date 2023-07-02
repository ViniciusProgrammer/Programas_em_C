#include <stdio.h>

typedef struct{
    char nome[15];
    int identificador;
    int vida;
    int ataque;
}batalha;

batalha time_red[6];
batalha time_blue[6];

batalha cadastramento(){
    
    for(int i = 0; i < 6; i++){
        scanf("%s", time_red[i].nome);
        scanf("%d", &time_red[i].identificador);
        scanf("%d", &time_red[i].ataque);
        scanf("%d", &time_red[i].vida);
    }
    
    for(int i = 0; i < 6; i++){
        scanf("%s", time_blue[i].nome);
        scanf("%d", &time_blue[i].identificador);
        scanf("%d", &time_blue[i].ataque);
        scanf("%d", &time_blue[i].vida);
    }
}

batalha fight(){
    batalha melhorBlue = time_blue[0], melhorRed = time_red[0];
    
    for(int i = 1; i < 6; i++){
        if(time_blue[i].ataque > melhorBlue.ataque || (time_blue[i].ataque == melhorBlue.ataque
        && time_blue[i].identificador < melhorBlue.identificador)){
            melhorBlue = time_blue[i];
        }   
    }
    
    for(int i = 1; i < 6; i++){
        if(time_red[i].ataque > melhorRed.ataque || (time_red[i].ataque == melhorRed.ataque
        && time_red[i].identificador < melhorRed.identificador)){
            melhorRed = time_red[i];
        }   
    }

    while(melhorBlue.vida > 0 && melhorRed.vida > 0){
        melhorBlue.vida -= melhorRed.ataque;
        melhorRed.vida -= melhorBlue.ataque;
    }

    if(melhorBlue.vida <= 0 && melhorRed.vida <= 0){
        printf("Pokemon do Red: %s\n", melhorRed.nome);
        printf("Pokemon do Blue: %s\n", melhorBlue.nome);
        printf("Empate\n");
    }

    else if(melhorBlue.vida <= 0){
        printf("Pokemon do Red: %s\n", melhorRed.nome);
        printf("Pokemon do Blue: %s\n", melhorBlue.nome);
        printf("Vencedor: Red\n");
    }
    else{
        printf("Pokemon do Red: %s\n", melhorRed.nome);
        printf("Pokemon do Blue: %s\n", melhorBlue.nome);
        printf("Vencedor: Blue\n");
    }
}

int main(){
    
    cadastramento();
    fight();
    
    return 0;
}
