#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int ans = rand() % 4;

    int no;

    printf("1, 2, 3\nどれかえらんでください: ");
    scanf("%d", &no);
    
    if (no == ans || ans ==0) {
        printf("\n\n\n\n\n⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎\n");
        printf("あたり！ママにおやつをもらってね\n");
        printf("⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎\n\n\n\n\n");
    } else
        printf("\n\n\n\n\n........ざんねん........\n\n\n\n\n");

    printf("ANS: %d, INPUT: %d\n", ans, no);
    return 0;
}

