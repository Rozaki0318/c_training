#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("This program generates 0 - %d.\n", RAND_MAX);

    int retry;

    do {
        printf("\nrand %d was generated.\n", rand());
        printf("Try again? (0)NO (1)YES: ");
        scanf("%d", &retry);
    } while (retry == 1);

    return 0;
}
