#include <time.h>
#include <stdio.h>

int main(void)
{
    clock_t start = clock();
    for (int i = 1000; i > 0; i--) {
        printf("%d\n", i);
    }
    clock_t end = clock();

    double start_t = start / CLOCKS_PER_SEC;
    double end_t = end /CLOCKS_PER_SEC;

    printf("START: %.1fsec\n", start_t);
    printf("END: %.1fsec\n", end_t);

    return 0;
}
