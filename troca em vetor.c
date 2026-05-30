#include <stdio.h>

int main(){
    int vetor[20];
    int posicao = 0;
    
    for(int i = 0; i < 20; i++){
        scanf("%d",&vetor[i]);
    }
    for(int i = 19; i >= 0; i--){
        printf("N[%d] = %d\n",posicao,vetor[i]);
        posicao++;
    }

    return 0;
}