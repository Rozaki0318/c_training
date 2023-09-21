# include <stdio.h>

int main(void)
{
    printf("guess 0 - 9\n\n");

    int ans = 7;
    int no;

    printf("type number: ");
    scanf("%d", &no);

    if (no < ans)
        printf("Bigger.\a\n");
    else if (no > ans)
        printf("more little. \a\n");
    else
        printf("Bingo!\n");

    return 0;
}

