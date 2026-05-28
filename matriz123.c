#include <stdio.h>

int main(){
    int entrada;
    int n = 1;

    scanf("%d",&entrada);
    int matriz[entrada][entrada];

    for (int i = 0; i < entrada; i++){
        for(int j = 0; j < entrada; j++){
            if(i == j){
                matriz[i][j] = 1;
                printf("%d",matriz[i][j]);
            }else if(j == entrada - n){
                n++;
                matriz[i][j] = 2;
                printf("%d",matriz[i][j]);
            }else{
                matriz[i][j] = 3;
                printf("%d",matriz[i][j]);
            }
        }
        printf("\n");
    }


    return 0;
}