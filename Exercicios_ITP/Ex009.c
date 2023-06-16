#include<stdio.h>
#include <stdlib.h>

int contar(float valor, int n, float values [n]){
    int quantidade = 0;
    for(int i=0;i<n;i++){
        if(values[i] == valor){
            quantidade = quantidade + 1;
        }
    }

    return quantidade;
    
}

float * distintos(int n, float valores[n], int *quantidade){
    *quantidade = 0;

    for(int i=0;i<n;i++){
        if(contar(valores[i], n, valores) == 1){
            *quantidade = *quantidade + 1;
        }
    }
    int andar_em_resultado = 0;

    float * resultado = (float *) malloc(*quantidade * sizeof(float));

    for(int i=0;i<n;i++){
        if(contar(valores[i], n, valores) == 1){
            resultado[andar_em_resultado] = valores[i];
            andar_em_resultado = andar_em_resultado + 1;
        }
    }

    return resultado;

}

int main(){
    int n;
    scanf("%d", &n);
    
    float values [n]; 
    for(int i = 0; i < n; i++){
        scanf("%f", &values[i]);
    }
    
    int d;
    float * resultado = distintos(n, values, &d);

    printf("[");
    if(d > 0){
        printf("%.4f", resultado[0]);
    }
    for(int i=1;i<d;i++){
        printf(", %.4f", resultado[i]);
    }
    printf("]");
    
    free(resultado);
    
    return 0;
}