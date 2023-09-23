#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STAGE 10

int main(void)
{
    srand(time(NULL));

    int ans = rand() % 1000;
    int no;

    int num[MAX_STAGE];
    int stage = 0;

    printf("Guess 0 - 999\n");

    do {
        printf("REST %d, guess the number: ", MAX_STAGE - stage);
        scanf("%d", &no);
        num[stage++] = no;

        if (no > ans)
            printf("smaller\a\n");
        else if (no < ans)
            printf("bigger\a\n");
    } while (no != ans && stage < MAX_STAGE);

    if (no != ans)
        printf("GAME OVER. The number is %d\n", ans);
    else {
        printf(" #########\n");
        printf("# BINGO!! #\n");
        printf(" #########\n");
        printf("You've got the number %dth try!!\n", stage);
    }

    puts("\n--- HISTORY ---");
    for (int i = 0; i < stage; i++)
        printf(" %2d : %4d %+4d\n", i + 1, num[i], num[i] - ans);

    return 0;
}
