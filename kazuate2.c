#include <stdio.h>

int main(void)
{
    printf("guess the number!\n\n");

    int ans = 7;
    int no;

    do {
        printf("Type your guess.\n");
        scanf("%d", &no);

        if (no > ans)
            printf("more little\n");
        else if (no < ans)
            printf("more big\n");
    } while (no !=ans);
    printf("Bingo!\n");

    return 0;
}

