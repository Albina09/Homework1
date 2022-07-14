/*Заполнить верхний триугольник 1, а нижний 0*/
#include <stdio.h>
#define N 3

int main(){
    int a[N][N];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= N-i-1; j++)
            a[N-i-1][j+i] = 0;
    }

    for(int i = 0; i < N-1; i++){
        for(int j = 0; j <= i; j++)
            a[i-j][j] = 1;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
	    printf("%2d ", a[i][j]);
	printf("\n");
    }

    return 0;
}
