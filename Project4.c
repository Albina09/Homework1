/*Заполнить матрицу числами улиткой*/
#include <stdio.h>
#define N 7

int main(){
    int a[N][N];
    int b = 1;
    int M = N - 1;
    int p = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            a[i][j] = 0;
    }
    
    while(b<=N*N){
        for(int i = p; i <= M; i++)
            a[p][i] = b++;
    
    
        for(int i = p + 1 ; i <= M; i++)
            a[i][M] = b++;
    
        for(int i = M - 1; i >= p; i--)
            a[M][i] = b++;
    
        for(int i = M - 1; i > p; i--)
            a[i][p] = b++;
  
        p++;
        M--;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
	    printf("%2d ", a[i][j]);
	printf("\n");
    }

    return 0;
}
