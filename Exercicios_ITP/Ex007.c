#include <stdio.h>
#include <stdlib.h>

void mmm(int* vetcp, int* maior, int* menor, float* media){
    int x;
    *maior = vetcp[0];
    *menor = vetcp[0];

    for(x = 0; x < 20; x++){
        if(vetcp[x] > *maior){
            *maior = vetcp[x];
        }
        
        if(vetcp[x] < *menor){
            *menor = vetcp[x];
        }
    }
    
    *media = (*maior + *menor);
}

int main()
{
    int vet[20], maior, menor, i;
    float media;
    
    for(i = 0; i < 20; i++){
        scanf("%d", &vet[i]);
    }
    
    mmm(vet, &maior, &menor, &media);
    
    printf("%d %d\n", maior, menor);
    printf("%.1f\n", (media)/2);
    
    return 0;
}