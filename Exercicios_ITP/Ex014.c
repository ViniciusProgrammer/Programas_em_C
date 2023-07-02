#include <stdio.h>

typedef struct{
    int n;
    double vet[1000];
}operaVetor;

operaVetor soma(operaVetor vetA, operaVetor vetB){
    operaVetor v;
    v.n = vetA.n;

    for(int i = 0; i < v.n; i++){
        v.vet[i] = vetA.vet[i] + vetB.vet[i];
    }
    return v;
}

double produto(operaVetor vetA, operaVetor vetB){
    double p = 0;

    for(int i = 0; i < vetA.n; i++){
        p += vetA.vet[i] * vetB.vet[i];
    }
    return p;
}

int main(){
    int n, i;
    operaVetor v1, v2;

    scanf("%d", &n);

    v1.n = n;
    v2.n = n;

    for(i = 0; i < n; i++){
        scanf("%lf", &v1.vet[i]);
    }

    for(i = 0; i < n; i++){
        scanf("%lf", &v2.vet[i]);
    }

    operaVetor v3 = soma(v1, v2);
    double v4 = produto(v1, v2);

    for(i = 0; i < n; i++){
        printf("%.2lf ", v3.vet[i]);
    }

    printf("\n");
  
    printf("%.2lf\n", v4);

    return 0;
}