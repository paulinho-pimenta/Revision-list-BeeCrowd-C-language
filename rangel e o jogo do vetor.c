#include <stdio.h>

int main(){
    int tamanho_vetor,n_rodadas;
    
    scanf("%d",&tamanho_vetor); //tamanho do vetor
    scanf("%d",&n_rodadas); //quantidade de rodadas

    int vetor[tamanho_vetor];
    for(int i = 0; i < tamanho_vetor; i++){
        scanf("%d",&vetor[i]); //elementos do vetor
    }
    for(int i = 0; n_rodadas; i++){
        scanf("%d");
    }

    return 0;
}