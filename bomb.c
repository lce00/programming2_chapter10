#include<stdio.h>
#define line 5 //행-가로
#define row 5 //열-세로

int bomb(int array[line][row], int a, int b)
{
    for (int i = a-1; i <= a+1; i++) {
        array[i][b] = 1;
    }

    for (int i = a-1; i <= a+1; i++) {
        array[i][b-1] = 1;
    }

    for (int i = a-1; i <= a+1; i++) {
        array[i][b+1] = 1;
    }

    int cnt = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (array[i][j] == 0) {
                cnt += 1;
            }
        }
    }

    return cnt;
}

int main()
{
    int array[line][row] = { 0, 0 };

    for (int i = 0; i < 5; i++) {
        //puts("");
        for (int j = 0; j < 5; j++) {
            //printf("%d", array[i][j]);
        }
    } //puts("");

    bomb(array, 1, 1);
    bomb(array, 0, 4);
    printf("%d\n", bomb(array, 2, 3));
}