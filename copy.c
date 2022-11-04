#include <stdio.h>

int main(void)
{
    int src[10000];
    for (int i = 0; i < 10000; i++){
        src[i] = i + 1;
    }

    int dest[10000];
    for (int j = 0; j < 10000; j++){
        dest[j] = src[10000 - j - 1];
    }

    for (int g = 0; g < 10; g++){
        printf("%d", src[g]); putchar(' ');
    }

    putchar('\n'); 

    for (int g = 0; g < 10; g++){
        printf("%d", dest[g]); putchar(' ');
    }

    putchar('\n');

	return 0;
}