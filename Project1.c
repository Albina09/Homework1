/*Вывести квадратную матрицу по заданному N*/
#include <stdio.h>
#define N 4

int main(){
    int a[N][N];
    int b = 0;

    for(int i = 0;i < N; i++){
        for(int j = 0;j < N; j++){
	    a[i][j] = b++;
	    printf("%2d ", a[i][j]);
	}
	printf("\n");
    }
    return 0;
}
