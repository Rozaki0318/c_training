#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    srand(time(NULL));
    int ans = rand() % 1000;
    int no;
    
    printf("Guess a number 0 - 999\n");

    do {
        printf("Guess: ");
        scanf("%d", &no);

        if (no > ans)
            printf("smaller\n");
        else if (no < ans)
            printf("bigger\n");
    } while (no != ans);

    printf("BINGO!\n");

    return 0;
}
