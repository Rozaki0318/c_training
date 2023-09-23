#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    srand(time(NULL));

    const int max_stage = 10;
    int remain = max_stage;

    int ans = rand() % 1000;
    int no;
    
    printf("Guess a number 0 - 999\n");

    do {
        printf("%d/%d Guess: ", remain, max_stage);
        scanf("%d", &no);
        remain--;

        if (no > ans)
            printf("smaller\n");
        else if (no < ans)
            printf("bigger\n");
    } while (no != ans && remain > 0);
    
    if (no != ans)
        printf("GAME OVER. The number is %d\n", ans);
    else {
        printf("BINGO!\n");
        printf("RESULT: %d times\n", max_stage - remain);
    }

    return 0;
}
