#include <stdio.h>

int main(){
    int entrada;

    while(scanf("%d",&entrada) != EOF){
        int matriz[entrada][entrada];

        for (int i = 0; i < entrada; i++){
            for(int j = 0; j < entrada; j++){
                if(i + j == (entrada - 1)){
                    matriz[i][j] = 2;
                    printf("%d",matriz[i][j]);
                }else if(i == j){
                    matriz[i][j] = 1;
                    printf("%d",matriz[i][j]);
                }else{
                    matriz[i][j] = 3;
                    printf("%d",matriz[i][j]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
