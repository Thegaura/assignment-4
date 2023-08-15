#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 50

int main()
{
    int i, j;
    int max = 0;
    int freq[MAX] = {0};

    srand(time(NULL));

    for (i = 0; i < MAX; i++)
    {
        int num = rand() % 100 + 1;
        freq[num / 2]++;
    }

    for (i = 0; i < MAX; i++)
    {
        if (freq[i] > max)
            max = freq[i];
    }

    for (i = max; i > 0; i--)
    {
        for (j = 0; j < MAX; j++)
        {
            if (freq[j] >= i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    for (i = 0; i < MAX; i++)
        printf("%d ", freq[i]);

    return 0;
}