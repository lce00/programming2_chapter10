#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N = 100; // 몇 번 셔플?
	int card[100];
    for (int i = 0; i < 100; i++){
        card[i] = i + 1;
        // printf("%d", card[i]);
    }
	
    int size = sizeof(card) / sizeof(int);
	
    for (int i = 0; i < N; i++)
	{
		int a = rand() % size;
		int b = rand() % size;

		int tmp = card[a];
		card[a] = card[b];
		card[b] = tmp;
	}

	for (int i = 0; i < 5; i++) printf("%d ", card[i]);
	putchar('\n');

	return 0;
}