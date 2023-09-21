#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL)); //set and give seed to following rand()

    printf("This generates 0 - %d.\n", RAND_MAX);

    int retry;

    do {
        printf("rand %d was generated.\n", rand());

        printf("Try Again? (0)NO (1)YES: ");
        scanf("%d", &retry);
    } while (retry == 1);

    return 0;
}

