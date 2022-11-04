#include<stdio.h>
#define ARRAY 5
int get_min(int array[], int n)
{
    int i;
    int min = array[0];
    for(i = 0; i < n; i++){
        if (min >= array[i]){
            min = array[i];
        }
    }

    return min;
}

int get_max(int array[], int n)
{
    int i;
    int max = array[0];
    for(i = 0; i < n; i++){
        if (max <= array[i]){
            max = array[i];
        }
    }

    return max;
}

int main(void)
{
    int array[ARRAY] = {40, 21, 13, 74, 5};
    printf("min = %d\n", get_min(array, ARRAY));
    printf("max = %d\n", get_max(array, ARRAY));
}

