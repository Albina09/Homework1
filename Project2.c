/*Вывести заданный массив размером N в обратном порядке*/
#include <stdio.h>
#include <locale.h>
#define N 5

int main(void){
    setlocale(LC_ALL,"Rus");

    int a[N];
    int b = 0;
    int c = 0;
    int M =N-1;

    printf("Введите массив размером %d\n",N);

    for(int i = 0; i < N; i++)
        scanf("%d", &a[i]);


    printf("Первый способ\n");

    for(int i = M; i >= 0; i--)
        printf("%d\n", a[i]);


    printf("Второй способ\n");

    for(int i = 0; i < N/2; i++){
        c = a[i];
        a[i] = a[M-i];
        a[M-i] = c;
    }

    for(int i = 0; i < N; i++)
        printf("%d\n", a[i]);

    return 0;
}

